#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class Arduino
{
public:
    Arduino();
    ~Arduino(); // Destructor added
    int connectArduino();
    int closeArduino();
    void writeToArduino(const QByteArray &data); // Parameter changed to const reference
    QString readFromArduino();
     // Return type changed to void
    QSerialPort* getSerial();
    QString getArduinoPortName();

private:
    QSerialPort* serial;
    static const quint16 arduinoUnoVendorId = 9025;
    static const quint16 arduinoUnoProductId = 67;
    QString arduinoPortName;
    bool arduinoIsAvailable;
    QByteArray data;
};

#endif // ARDUINO_H
