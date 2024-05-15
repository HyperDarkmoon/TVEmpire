/********************************************************************************
** Form generated from reading UI file 'chatbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATBOX_H
#define UI_CHATBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatBox
{
public:
    QWidget *CentralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QListWidget *Users_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QListWidget *Chat;
    QHBoxLayout *horizontalLayout;
    QTextEdit *MessageLine_2;
    QPushButton *SendButton_2;

    void setupUi(QWidget *ChatBox)
    {
        if (ChatBox->objectName().isEmpty())
            ChatBox->setObjectName(QStringLiteral("ChatBox"));
        ChatBox->resize(1003, 578);
        ChatBox->setStyleSheet(QStringLiteral("#ChatBox{background:white;}"));
        CentralWidget = new QWidget(ChatBox);
        CentralWidget->setObjectName(QStringLiteral("CentralWidget"));
        CentralWidget->setGeometry(QRect(30, 20, 961, 551));
        CentralWidget->setStyleSheet(QLatin1String("QListWidget::item:selected {\n"
"	background: none;\n"
"	color: none;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"	background: none;\n"
"}"));
        layoutWidget = new QWidget(CentralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 258, 551));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Gadugi"));
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2 {\n"
"    background-color: #E2E2E4; /* Background color set to E0E0E1 */\n"
"    color: SOLID BLACK; /* Text color */\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-color: #242E42; /* Border color */\n"
"    border-radius: 8px;\n"
"}\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        Users_2 = new QListWidget(layoutWidget);
        Users_2->setObjectName(QStringLiteral("Users_2"));
        Users_2->setMinimumSize(QSize(200, 0));
        Users_2->setStyleSheet(QLatin1String("#Users_2 {\n"
"    background-color: #FCFCFF;\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-color: #242E42;\n"
"    padding: 2px;\n"
"    border-radius: 8px; /* Adding border radius */\n"
"}\n"
""));
        Users_2->setFrameShape(QFrame::Panel);

        verticalLayout_4->addWidget(Users_2);

        layoutWidget1 = new QWidget(CentralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(270, 0, 691, 551));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Chat = new QListWidget(layoutWidget1);
        Chat->setObjectName(QStringLiteral("Chat"));
        Chat->setStyleSheet(QLatin1String("\n"
"\n"
"#Chat {\n"
"    background-color: #FCFCFF; /* Background color for #chat */\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-color: #242E42; /* Same border color as other elements */\n"
"border-radius: 8px;\n"
"}\n"
""));
        Chat->setFrameShape(QFrame::Panel);
        Chat->setResizeMode(QListView::Adjust);
        Chat->setBatchSize(100);
        Chat->setWordWrap(true);

        verticalLayout->addWidget(Chat);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MessageLine_2 = new QTextEdit(layoutWidget1);
        MessageLine_2->setObjectName(QStringLiteral("MessageLine_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MessageLine_2->sizePolicy().hasHeightForWidth());
        MessageLine_2->setSizePolicy(sizePolicy);
        MessageLine_2->setMinimumSize(QSize(556, 61));
        MessageLine_2->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Helvetica"));
        font1.setPointSize(11);
        MessageLine_2->setFont(font1);
        MessageLine_2->setStyleSheet(QLatin1String("\n"
"background-color:#FCFCFF;\n"
"color: #242E42;\n"
"selection-color: none;\n"
"\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: #242E42;\n"
"padding: 2px;\n"
"border-radius: 8px;"));
        MessageLine_2->setFrameShape(QFrame::Panel);

        horizontalLayout->addWidget(MessageLine_2);

        SendButton_2 = new QPushButton(layoutWidget1);
        SendButton_2->setObjectName(QStringLiteral("SendButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SendButton_2->sizePolicy().hasHeightForWidth());
        SendButton_2->setSizePolicy(sizePolicy1);
        SendButton_2->setMinimumSize(QSize(81, 61));
        SendButton_2->setMaximumSize(QSize(81, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Gadugi"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        SendButton_2->setFont(font2);
        SendButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        SendButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:#2F3B52;\n"
"color:  white;\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(52, 52, 52);\n"
"padding: 4px;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"padding: 2px;\n"
"}\n"
""));

        horizontalLayout->addWidget(SendButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ChatBox);

        QMetaObject::connectSlotsByName(ChatBox);
    } // setupUi

    void retranslateUi(QWidget *ChatBox)
    {
        ChatBox->setWindowTitle(QApplication::translate("ChatBox", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("ChatBox", "Users", Q_NULLPTR));
        MessageLine_2->setHtml(QApplication::translate("ChatBox", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Helvetica'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        SendButton_2->setText(QApplication::translate("ChatBox", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChatBox: public Ui_ChatBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATBOX_H
