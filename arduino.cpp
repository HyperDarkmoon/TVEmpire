#include "arduino.h"
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>

Arduino::Arduino() {
    data = "";
    arduinoPortName = "";
    arduinoIsAvailable = false;
    serial = new QSerialPort;
}

QString Arduino::getArduinoPortName() {
    return arduinoPortName;
}

QSerialPort* Arduino::getSerial() {
    return serial;
}

int Arduino::connectArduino() {
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if (serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()) {
            if (serialPortInfo.vendorIdentifier() == arduinoUnoVendorId && serialPortInfo.productIdentifier() == arduinoUnoProductId) {
                arduinoIsAvailable = true;
                arduinoPortName = serialPortInfo.portName();
            }
        }
    }
    qDebug() << "Arduino port name is: " << arduinoPortName;
    if (arduinoIsAvailable) {
        serial->setPortName(arduinoPortName);
        if (serial->open(QSerialPort::ReadWrite)) {
            serial->setBaudRate(QSerialPort::Baud9600); // Baud rate: 9600 bits/s
            serial->setDataBits(QSerialPort::Data8);     // Data length: 8 bits
            serial->setParity(QSerialPort::NoParity);    // Optional parity bit: none
            serial->setStopBits(QSerialPort::OneStop);   // Stop bits: 1
            serial->setFlowControl(QSerialPort::NoFlowControl);
            return 0;
        }
        return 1;
    }
    return -1;
}

int Arduino::closeArduino() {
    if (serial->isOpen()) {
        serial->close();
        return 0;
    }
    return 1;
}

QByteArray Arduino::readFromArduino() {
    if (serial->isReadable()) {
        data = serial->readAll(); // Retrieve received data
        return data;
    }
}

int Arduino::writeToArduino(QByteArray d) {
    if (serial->isWritable()) {
        serial->write(d); // Send data to Arduino
    } else {
        qDebug() << "Couldn't write to serial!";
    }
}
