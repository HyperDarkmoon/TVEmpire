#ifndef GEMINIDIALOG_H
#define GEMINIDIALOG_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QEventLoop>
#include <QTimer>
#include <QObject>
namespace Ui {
class GeminiDialog;
}

class GeminiDialog : public QWidget
{
    Q_OBJECT

public:
    explicit GeminiDialog(QWidget *parent = nullptr);
    ~GeminiDialog();
    void handleBotResponse(QNetworkReply *reply);
    void generateBotResponse(const QString& userMessage);
    void setData(QString message);
private:
    Ui::GeminiDialog *ui;
};

#endif // GEMINIDIALOG_H
