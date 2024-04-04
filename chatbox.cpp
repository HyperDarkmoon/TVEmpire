#include "chatbox.h"
#include "ui_chatbox.h"
#include "employee.h"
#include "usersession.h"

ChatBox::ChatBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatBox)
{
    ui->setupUi(this);
    refreshUserList();
    connect(ui->Users_2, &QListWidget::itemSelectionChanged, this, &ChatBox::onUserSelectionChanged);
}

void ChatBox::onUserSelectionChanged() {
    // Get the selected user from the list
    QString receiver = ui->Users_2->currentItem()->text();

    // Get the current user
    QString sender = UserSession::getInstance().getUsername();

    // Refresh the chat window
    refreshChatWindow(sender, receiver);
}


void ChatBox::refreshChatWindow(QString sender, QString receiver) {
    ChatCrud chat;
    QList<ChatCrud> messages = chat.getAllMessagesBetweenUsers(sender, receiver);
    
    // Clear the existing items in the QListWidget
    ui->Chat->clear();
    
    // Iterate through the list of messages and add them to the QListWidget
    for (int i = 0; i < messages.size(); i++) {
        // Create a new QListWidgetItem with the message text
        QListWidgetItem *item = new QListWidgetItem(messages[i].getSender() + ": " + messages[i].getMessage());
        
        // Set the text color of the item to white
        item->setTextColor(Qt::white);
        
        // Add the item to the QListWidget
        ui->Chat->addItem(item);
    }
    
    // Ensure that the scroll bar is at the bottom to show the latest messages
    ui->Chat->scrollToBottom();
}


void ChatBox::refreshUserList() {
    CrudEmployee crudEmp;
    QList<CrudEmployee> emp = crudEmp.getAllEmployees();
    for (int i = 0; i < emp.size(); i++) {
        ui->Users_2->addItem(emp[i].getLogin());
        if (emp[i].getLogin() == UserSession::getInstance().getUsername()) {
            ui->Users_2->takeItem(i);
        }
    }
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

bool ChatCrud::createMessage(ChatCrud chat)
{
    QSqlQuery query;
    query.prepare("INSERT INTO messages (message_id, sender, receiver, message) VALUES (MESSAGES_SEQ.NEXTVAL, :sender, :receiver, :message)");
    query.bindValue(":sender", chat.getSender());
    query.bindValue(":receiver", chat.getReceiver());
    query.bindValue(":message", chat.getMessage());
     if (!query.exec())
    {
        qDebug() << "Error executing query:";
        qDebug() << "Query:" << query.lastQuery();
        qDebug() << "Error:" << query.lastError().text();
        return false;
    }
    else
    {
        qDebug() << "Query executed successfully:";
        qDebug() << "Query:" << query.lastQuery();
        return true;
    }
}

QList<ChatCrud> ChatCrud::getAllMessagesBetweenUsers(QString sender, QString receiver)
{
    QList<ChatCrud> messages;
    QSqlQuery query;
    query.prepare("SELECT * FROM messages WHERE (sender = :sender AND receiver = :receiver) OR (sender = :receiver AND receiver = :sender)");
    query.bindValue(":sender", sender);
    query.bindValue(":receiver", receiver);
    query.exec();
    while (query.next()) {
        ChatCrud chat;
        chat.setId(query.value(0).toUInt());
        chat.setSender(query.value(1).toString());
        chat.setReceiver(query.value(2).toString());
        chat.setMessage(query.value(3).toString());
        messages.append(chat);
    }
    return messages;
}


QList<ChatCrud> ChatCrud::getAllMessages()
{
    QList<ChatCrud> messages;
    QSqlQuery query;
    query.prepare("SELECT * FROM messages");
    query.exec();
    while (query.next()) {
        ChatCrud chat;
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


void ChatBox::on_SendButton_2_clicked()
{
    // Update the user's role from the database
    UserSession::getInstance().updateRoleFromDatabase();

    // Get the current user's role from the session
    QString currentUser = UserSession::getInstance().getUsername();
    //get the current logged in user for the sender and get the selected user from the userslist as the reciever
    QString sender = currentUser;
    QString receiver = ui->Users_2->currentItem()->text();
    QString message = ui->MessageLine_2->toPlainText();
    qDebug() << "Sender:" << sender;
    qDebug() << "Receiver:" << receiver;
    qDebug() << "Message:" << message;
    ChatCrud chat(0, sender, receiver, message);
    chat.createMessage(chat);
    ui->MessageLine_2->clear();
    refreshChatWindow(sender, receiver);
    /*ChatCrud chat;
    chat.setSender(sender);
    chat.setReceiver(receiver);
    chat.setMessage(message);
    chat.createMessage(chat);
    ui->Message_2->clear();*/

}
