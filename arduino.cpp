#include "arduino.h"
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

Arduino::Arduino() {
    data = "";
    arduinoPortName = "";
    arduinoIsAvailable = false;
    serial = new QSerialPort;
}

Arduino::~Arduino() {
    delete serial;
}

QString Arduino::getArduinoPortName() {
    return arduinoPortName;
}

QSerialPort* Arduino::getSerial() {
    return serial;
}

int Arduino::connectArduino() {
    if (!serial) {
        qDebug() << "Serial port is null!";
        return -1;
    }

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

void Arduino::readFromArduino() {
    if (serial->isReadable()) {
        data = serial->readAll(); // Retrieve received data
        qDebug() << "RFID Card scanned: " << data;
    }
}

void Arduino::writeToArduino(const QByteArray &d) {
    if (serial->isWritable()) {
        serial->write(d); // Send data to Arduino
    } else {
        qDebug() << "Couldn't write to serial!";
    }
}
