#ifndef VIDEOPLAYERDIALOG_H
#define VIDEOPLAYERDIALOG_H

#include <QDialog>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtMultimedia/QMediaPlayer>

namespace Ui {
class VideoPlayerDialog;
}

class VideoPlayerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VideoPlayerDialog(QWidget *parent = nullptr);
    ~VideoPlayerDialog();

    void playVideo(const QString &filePath);

private:
    Ui::VideoPlayerDialog *ui;
    QMediaPlayer *player;
    QVideoWidget *videoWidget;
};

#endif // VIDEOPLAYERDIALOG_H
