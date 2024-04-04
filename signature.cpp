#include "signature.h"
#include <QPainter>
#include <QMouseEvent>
#include <QPixmap>
#include <QByteArray>
#include <QBuffer>

Signature::Signature(QWidget *parent) : QLabel(parent) {

    move(15, 525);
    setFixedSize(227, 127); // Set the size of the QLabel
    m_pixmap = QPixmap(size());
    m_pixmap.fill(Qt::white); // Initialize with a white background
    m_drawing = false;

    // Create the clear button
    clearButton = new QPushButton("Clear", this);
    clearButton->setGeometry(80, 100, 80, 25); // Adjust position and size as needed

    // Connect the clear button clicked signal to clearSignature slot
    connect(clearButton, &QPushButton::clicked, this, &Signature::clearSignature);
}

void Signature::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.drawPixmap(0, 0, m_pixmap);
}

void Signature::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_drawing = true;
        m_lastPoint = event->pos();
    }
}

void Signature::mouseMoveEvent(QMouseEvent *event) {
    if ((event->buttons() & Qt::LeftButton) && m_drawing) {
        QPainter painter(&m_pixmap);
        painter.drawLine(m_lastPoint, event->pos());
        m_lastPoint = event->pos();
        update();
    }
}

void Signature::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton && m_drawing) {
        m_drawing = false;
    }
}

void Signature::clearSignature() {
    m_pixmap.fill(Qt::white);
    update();
}
QByteArray Signature::getSignatureBlob() const {
    // Convert the pixmap to a byte array
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);
    m_pixmap.save(&buffer, "PNG"); // Save pixmap as PNG format
    return byteArray;
}
