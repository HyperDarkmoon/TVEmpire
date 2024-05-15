/********************************************************************************
** Form generated from reading UI file 'videoplayerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYERDIALOG_H
#define UI_VIDEOPLAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoPlayerDialog
{
public:
    QWidget *videoContainer;

    void setupUi(QDialog *VideoPlayerDialog)
    {
        if (VideoPlayerDialog->objectName().isEmpty())
            VideoPlayerDialog->setObjectName(QStringLiteral("VideoPlayerDialog"));
        VideoPlayerDialog->resize(1043, 442);
        videoContainer = new QWidget(VideoPlayerDialog);
        videoContainer->setObjectName(QStringLiteral("videoContainer"));
        videoContainer->setGeometry(QRect(10, 10, 1011, 411));

        retranslateUi(VideoPlayerDialog);

        QMetaObject::connectSlotsByName(VideoPlayerDialog);
    } // setupUi

    void retranslateUi(QDialog *VideoPlayerDialog)
    {
        VideoPlayerDialog->setWindowTitle(QApplication::translate("VideoPlayerDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoPlayerDialog: public Ui_VideoPlayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYERDIALOG_H
