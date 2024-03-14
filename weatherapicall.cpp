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
    QEventLoop loop;
    QTimer timer;
    connect(&timer, &QTimer::timeout, &loop, &QEventLoop::quit);

    QUrl url("https://api.openweathermap.org/data/2.5/weather");
    QUrlQuery query;
    query.addQueryItem("lat", QString::number(latitude));
    query.addQueryItem("lon", QString::number(longitude));
    query.addQueryItem("appid", apiKey);
    url.setQuery(query);

    QNetworkReply *reply = m_manager->get(QNetworkRequest(url));
    connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    timer.start(5000); // Timeout after 5 seconds

    loop.exec();

    if (reply->error() != QNetworkReply::NoError) {
        qDebug() << "Error:" << reply->errorString();
        reply->deleteLater();
        return QString();
    }

    QByteArray data = reply->readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(data);
    QJsonObject jsonObj = jsonDoc.object();

    QString temperature;
    if (jsonObj.contains("main")) {
        QJsonObject mainObj = jsonObj["main"].toObject();
        if (mainObj.contains("temp")) {
            double tempKelvin = mainObj["temp"].toDouble();
            temperature = QString::number(tempKelvin - 273.15); // Convert to Celsius
        }
    }

    reply->deleteLater();
    return temperature;
}
