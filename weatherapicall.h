#ifndef WEATHERAPICLIENT_H
#define WEATHERAPICLIENT_H

#include <QObject>
#include <QString>

class QNetworkAccessManager;

class WeatherApiClient : public QObject
{
    Q_OBJECT

public:
    explicit WeatherApiClient(QObject *parent = nullptr);
    QString getTemperature(double latitude, double longitude, const QString &apiKey);

private:
    QNetworkAccessManager *m_manager;
};

#endif // WEATHERAPICLIENT_H
