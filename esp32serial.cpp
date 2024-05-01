#include "esp32serial.h"
#include <QDebug>
ESP32Serial::ESP32Serial(QObject *parent) : QObject(parent), m_connected(false)
{
    connect(&m_serialPort, &QSerialPort::readyRead, this, &ESP32Serial::readData);
}

ESP32Serial::~ESP32Serial()
{
    disconnectFromESP32();
}

bool ESP32Serial::connectToESP32(const QString &portName, qint32 baudRate)
{
    if (m_serialPort.isOpen())
        m_serialPort.close();

    m_serialPort.setPortName(portName);
    m_serialPort.setBaudRate(baudRate);

    if (!m_serialPort.open(QIODevice::ReadWrite)) {
        qDebug() << "Failed to open serial port:" << m_serialPort.errorString();
        return false;
    }

    m_connected = true;
    qDebug() << "Serial port connected to" << portName << "at" << baudRate << "baud";
    return true;
}

void ESP32Serial::disconnectFromESP32()
{
    if (m_serialPort.isOpen()) {
        m_serialPort.close();
        qDebug() << "Serial port disconnected";
    }
    m_connected = false;
}

bool ESP32Serial::isConnected() const
{
    return m_connected;
}

void ESP32Serial::sendData(const QByteArray &data)
{
    if (m_connected)
        m_serialPort.write(data);
}

void ESP32Serial::readData()
{
    QByteArray data = m_serialPort.readAll();
    emit dataReceived(data);
}
