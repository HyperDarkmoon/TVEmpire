#include "geminidialog.h"
#include "ui_geminidialog.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QEventLoop>
#include <QTimer>
#include <QObject>
GeminiDialog::GeminiDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GeminiDialog)
{
    ui->setupUi(this);
}

GeminiDialog::~GeminiDialog()
{
    delete ui;
}



void GeminiDialog::generateBotResponse(const QString& userMessage)
{
    QNetworkAccessManager *manager = new QNetworkAccessManager;
    QUrl url("https://generativelanguage.googleapis.com/v1beta/models/gemini-pro:generateContent?key=AIzaSyB7Tlh7q8ze1yFIhmdyHJKhspe0054cgIY");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject requestBody;
    QJsonArray contentsArray;

    QJsonObject userPart;
    userPart["role"] = "user";
    QJsonArray userPartsArray;
    userPartsArray.append(QJsonObject{{"text", userMessage}});
    userPart["parts"] = userPartsArray;
    contentsArray.append(userPart);

    requestBody["contents"] = contentsArray;

    QJsonDocument doc(requestBody);
    QByteArray postData = doc.toJson();

    QNetworkReply *reply = manager->post(request, postData);

    // Connect signals and slots for asynchronous handling
    connect(reply, &QNetworkReply::finished, [=]() {
        handleBotResponse(reply);
        reply->deleteLater();
    });
}

void GeminiDialog::handleBotResponse(QNetworkReply *reply)
{
    QString botResponse;
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument responseDoc = QJsonDocument::fromJson(responseData);
        QJsonObject responseObj = responseDoc.object();
        if (responseObj.contains("candidates") && responseObj["candidates"].isArray()) {
            QJsonArray candidatesArray = responseObj["candidates"].toArray();
            if (!candidatesArray.isEmpty()) {
                QJsonObject contentObj = candidatesArray.first().toObject()["content"].toObject();
                if (contentObj.contains("parts") && contentObj["parts"].isArray()) {
                    QJsonArray partsArray = contentObj["parts"].toArray();
                    if (!partsArray.isEmpty()) {
                        botResponse = partsArray.first().toObject()["text"].toString();
                    }
                }
            }
        }
    } else {
        qDebug() << "Error:" << reply->errorString();
        qDebug() << "Error details:" << reply->readAll();
    }
    ui->label->setText(botResponse);
}
void GeminiDialog::setData(QString message){
    ui->inputLabel->setText(message);
    generateBotResponse("summarize this : " + message);
}
