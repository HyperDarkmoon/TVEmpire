#ifndef SIGNATURE_H
#define SIGNATURE_H

#include <QLabel>
#include <QPushButton>

class Signature : public QLabel
{
    Q_OBJECT

public:
    explicit Signature(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private slots:
    void clearSignature();

private:
    QPixmap m_pixmap;
    QPoint m_lastPoint;
    bool m_drawing;
    QPushButton *clearButton; // Add a QPushButton member
};

#endif // SIGNATURE_H
