// signature.h

#ifndef SIGNATURE_H
#define SIGNATURE_H

#include <QWidget>

class Signature : public QWidget {
    Q_OBJECT

public:
    explicit Signature(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private slots:
    void clearSignature();
    void saveSignature();

private:
    QPixmap m_pixmap;
    QPoint m_lastPoint;
    bool m_drawing;
};

#endif // SIGNATURE_H
