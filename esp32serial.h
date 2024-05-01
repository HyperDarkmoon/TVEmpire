#ifndef ESP32SERIAL_H
#define ESP32SERIAL_H

#include <QObject>
#include <QSerialPort>

class ESP32Serial : public QObject
{
    Q_OBJECT

public:
    explicit ESP32Serial(QObject *parent = nullptr);
    ~ESP32Serial();

    bool connectToESP32(const QString &portName, qint32 baudRate);
    void disconnectFromESP32();
    bool isConnected() const;

signals:
    void dataReceived(const QByteArray &data);

public slots:
    void sendData(const QByteArray &data);

private slots:
    void readData();

private:
    QSerialPort m_serialPort;
    bool m_connected;
};

#endif // ESP32SERIAL_H
