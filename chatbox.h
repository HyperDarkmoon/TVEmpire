#ifndef CHATBOX_H
#define CHATBOX_H
#include <QWidget>
#include <QTime>
#include <QDate>
#include <QtSql>

namespace Ui {
class ChatBox;
}

class ChatBox : public QWidget
{
    Q_OBJECT

public:
    explicit ChatBox(QWidget *parent = nullptr);
    ~ChatBox();
    void refreshUserList();
    void refreshChatWindow(QString sender, QString receiver);

private slots:
    void on_SendButton_2_clicked();
    void onUserSelectionChanged();

private:
    Ui::ChatBox *ui;
};

class ChatCrud {
public:
    ChatCrud(unsigned int id = 0, QString sender = "", QString receiver = "", QString message = "");
    void setId(unsigned int id);
    unsigned int getId() const;

    void setSender(QString sender);
    QString getSender() const;

    void setReceiver(QString receiver);
    QString getReceiver() const;

    void setMessage(QString message);
    QString getMessage() const;

    bool createMessage(ChatCrud chat);
    QList<ChatCrud> getAllMessagesBetweenUsers(QString sender, QString receiver);
    QList<ChatCrud> getAllMessages();
    QVariant getChatDataByIndex(int idnex);
private:
    unsigned int id;
    QString sender;
    QString receiver;
    QString message;
};

#endif // CHATBOX_H
