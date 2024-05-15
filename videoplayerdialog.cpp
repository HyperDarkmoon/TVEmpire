#include "videoplayerdialog.h"
#include "ui_videoplayerdialog.h"
#include <QVBoxLayout>
#include <QByteArray>
#include <QSqlQuery>
#include <QTemporaryFile>
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

void VideoPlayerDialog::playVideo(unsigned int id)
{
    QSqlQuery query;
    query.prepare("SELECT videodata FROM emissions WHERE id = :id");
    query.bindValue(":id", id);
    query.exec();
    QByteArray vid;
    if (query.next()) {
        vid = query.value(0).toByteArray();
    }
    QTemporaryFile tempFile;
      if (!tempFile.open()) {
        // Handle temporary file creation error
        return;
      }
      tempFile.write(vid);
      tempFile.setAutoRemove(false); // Don't delete on close

      // Play video from temporary file
      QString tempFilePath = tempFile.fileName();
      player->setMedia(QUrl::fromLocalFile(tempFilePath));
      player->play();
}
