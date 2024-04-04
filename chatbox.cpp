#include "chatbox.h"
#include "ui_chatbox.h"

ChatBox::ChatBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatBox)
{
    ui->setupUi(this);
}

ChatBox::~ChatBox()
{
    delete ui;
}

ChatCrud::ChatCrud(unsigned int id, QString sender, QString receiver, QString message)
{
    this->id = id;
    this->sender = sender;
    this->receiver = receiver;
    this->message = message;
}

void ChatCrud::setId(unsigned int id)
{
    this->id = id;
}

unsigned int ChatCrud::getId() const
{
    return id;
}

void ChatCrud::setSender(QString sender)
{
    this->sender = sender;
}

QString ChatCrud::getSender() const
{
    return sender;
}

void ChatCrud::setReceiver(QString receiver)
{
    this->receiver = receiver;
}

QString ChatCrud::getReceiver() const
{
    return receiver;
}

void ChatCrud::setMessage(QString message)
{
    this->message = message;
}

QString ChatCrud::getMessage() const
{
    return message;
}

void ChatCrud::createMessage(CrudChat chat)
{
    QSqlQuery query;
    query.prepare("INSERT INTO chat (id, sender, receiver, message) VALUES (messages_seq.NEXTVAL, :sender, :receiver, :message)");
    query.bindValue(":sender", chat.getSender());
    query.bindValue(":receiver", chat.getReceiver());
    query.bindValue(":message", chat.getMessage());
    query.exec();
}

QList<CrudChat> ChatCrud::getAllMessagesBetweenUsers(QString sender, QString receiver)
{
    QList<CrudChat> messages;
    QSqlQuery query;
    query.prepare("SELECT * FROM chat WHERE sender = :sender AND receiver = :receiver");
    query.bindValue(":sender", sender);
    query.bindValue(":receiver", receiver);
    query.exec();
    while (query.next()) {
        CrudChat chat;
        chat.setId(query.value(0).toUInt());
        chat.setSender(query.value(1).toString());
        chat.setReceiver(query.value(2).toString());
        chat.setMessage(query.value(3).toString());
        messages.append(chat);
    }
    return messages;
}

QList<CrudChat> ChatCrud::getAllMessages()
{
    QList<CrudChat> messages;
    QSqlQuery query;
    query.prepare("SELECT * FROM chat");
    query.exec();
    while (query.next()) {
        CrudChat chat;
        chat.setId(query.value(0).toUInt());
        chat.setSender(query.value(1).toString());
        chat.setReceiver(query.value(2).toString());
        chat.setMessage(query.value(3).toString());
        messages.append(chat);
    }
    return messages;
}

QVariant ChatCrud::getChatDataByIndex(int index)
{
    return QVariant();
}

