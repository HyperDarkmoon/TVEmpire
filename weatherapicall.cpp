#include "weatherapicall.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QEventLoop>
#include <QTimer>

WeatherApiClient::WeatherApiClient(QObject *parent)
    : QObject(parent), m_manager(new QNetworkAccessManager(this))
{
}

QString WeatherApiClient::getTemperature(double latitude, double longitude, const QString &apiKey)
{
    qDebug() << "Requesting temperature for coordinates:" << latitude << "," << longitude;

    QUrl url("https://api.openweathermap.org/data/2.5/weather");
    QUrlQuery query;
    query.addQueryItem("lat", QString::number(latitude));
    query.addQueryItem("lon", QString::number(longitude));
    query.addQueryItem("appid", apiKey);
    url.setQuery(query);

    qDebug() << "Request URL:" << url;

    QNetworkReply *reply = m_manager->get(QNetworkRequest(url));

    // Timeout after 5 seconds
    QEventLoop loop;
    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, [&]() {
        qDebug() << "Timeout occurred.";
        loop.quit();
    });
    timer.start(5000);

    QObject::connect(reply, &QNetworkReply::finished, [&]() {
        qDebug() << "Reply received.";
        timer.stop();
        loop.quit();
    });

    qDebug() << "Waiting for reply...";

    loop.exec();

    if (reply->error() != QNetworkReply::NoError) {
        qDebug() << "Error:" << reply->errorString();
        reply->deleteLater();
        return QString();
    }

    qDebug() << "Received reply.";

    QByteArray data = reply->readAll();
    reply->deleteLater(); // Delete reply after reading data

    qDebug() << "Data received:" << data;

    QJsonDocument jsonDoc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj = jsonDoc.object();

    QString temperature;
    if (jsonObj.contains("main")) {
        QJsonObject mainObj = jsonObj["main"].toObject();
        if (mainObj.contains("temp")) {
            double tempKelvin = mainObj["temp"].toDouble();
            temperature = QString::number(tempKelvin - 273.15); // Convert to Celsius
            qDebug() << "Temperature:" << temperature;
        }
    }

    return temperature;
}
