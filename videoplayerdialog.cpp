#include "videoplayerdialog.h"
#include "ui_videoplayerdialog.h"
#include <QVBoxLayout>
VideoPlayerDialog::VideoPlayerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VideoPlayerDialog),
    player(new QMediaPlayer(this)),
    videoWidget(new QVideoWidget(this))
{
    ui->setupUi(this);

    QVBoxLayout *layout = new QVBoxLayout(ui->videoContainer);
    layout->addWidget(videoWidget);
    ui->videoContainer->setLayout(layout);

    player->setVideoOutput(videoWidget);
}

VideoPlayerDialog::~VideoPlayerDialog()
{
    delete ui;
}

void VideoPlayerDialog::playVideo(const QString &filePath)
{
    player->setMedia(QUrl::fromLocalFile(filePath));
    player->play();
}
