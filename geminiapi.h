#ifndef GEMINIAPI_H
#define GEMINIAPI_H
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QEventLoop>
#include <QTimer>
#include <QObject>
class GeminiApi
{
public:
    GeminiApi();
    void handleBotResponse(QNetworkReply *reply);
    void generateBotResponse(const QString& userMessage);
};

#endif // GEMINIAPI_H
