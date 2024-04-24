#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class Arduino
{
public:
    Arduino();
    int connectArduino(); // Connects the PC to Arduino
    int closeArduino();   // Closes the connection
    int writeToArduino(QByteArray); // Sends data to Arduino
    QByteArray readFromArduino();    // Receives data from the Arduino board
    QSerialPort* getSerial();        // Accessor
    QString getArduinoPortName();

private:
    QSerialPort* serial; // This object contains information (speed, data bits, etc.)
                         // and functions (send, receive read, etc.) about what a serial port is for Arduino.
    static const quint16 arduinoUnoVendorId = 9025;
    static const quint16 arduinoUnoProductId = 67;
    QString arduinoPortName;
    bool arduinoIsAvailable;
    QByteArray data; // Contains data read from Arduino
};

#endif // ARDUINO_H
