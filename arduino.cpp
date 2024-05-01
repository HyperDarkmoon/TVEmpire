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
                arduinoIsAvailable = true;
                arduinoPortName = serialPortInfo.portName();
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

QString Arduino::readFromArduino() {
    QString receivedData;

    if (serial->isReadable()) {
        QByteArray requestData = serial->readAll(); // Read data from the Arduino

        // Assuming the Arduino sends RFID data in a specific format (e.g., "E3 64 7E 2E")
        receivedData = QString::fromUtf8(requestData).trimmed(); // Convert to QString and remove whitespace

        if (!receivedData.isEmpty()) {
            qDebug() << "RFID Card scanned:" << receivedData;

            // Emit a signal with the scanned RFID data if needed
        }
    }

    return receivedData;
}


void Arduino::writeToArduino(const QByteArray &d) {
    if (serial->isWritable()) {
        serial->write(d); // Send data to Arduino
    } else {
        qDebug() << "Couldn't write to serial!";
    }
}
