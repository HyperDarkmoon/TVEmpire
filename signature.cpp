#include "signature.h"
#include <QPainter>
#include <QMouseEvent>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel> // Include the QLabel header file

Signature::Signature(QWidget *parent) : QDialog(parent) {
    setFixedSize(400, 200); // Set the size of the dialog
    m_pixmap = QPixmap(size());
    m_pixmap.fill(Qt::white); // Initialize with a white background
    m_drawing = false;

    QPushButton *clearButton = new QPushButton("Clear Signature", this);
    QPushButton *saveButton = new QPushButton("Save Signature", this);

    connect(clearButton, &QPushButton::clicked, this, &Signature::clearSignature);
    connect(saveButton, &QPushButton::clicked, this, &Signature::saveSignature);

    QHBoxLayout *buttonLayout = new QHBoxLayout(); // Layout for buttons
    buttonLayout->addStretch(); // Add stretch to push buttons to the right
    buttonLayout->addWidget(clearButton);
    buttonLayout->addWidget(saveButton);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QLabel *label = new QLabel("Signature Area"); // Create QLabel instance
    mainLayout->addWidget(label); // Add QLabel to the layout
    mainLayout->addStretch(); // Add stretch to push buttons to the bottom
    mainLayout->addLayout(buttonLayout);
    setLayout(mainLayout);
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

void Signature::saveSignature() {
    // Add code to save the signature to the database
}
