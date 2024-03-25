#include "mainwindow.h"
#include "form2.h"
#include <QApplication>
#include <QFile>
#include <QDir>
#include <QDebug>
#include <qsqldatabase.h>
#include "dbconnection.h"
#include <QMessageBox>
#include "mailing.h"
#include "../smtp/src/SmtpMime"
int main(int argc, char *argv[]) {
        QApplication a(argc, argv);
        dbconnection db;
        bool test = db.createconnect();

        if (test)
        {
            // Create and show the main application window (MainWindow)
            //mainWindow.show();
            Form2 loginpage;
            loginpage.show();


            //mailing test

            // ################################################
            QString username = "mohamedslimane555@gmail.com";
                QString password = "zyrx jiib bvqt yxnv";
                SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

                    // We need to set the username (your email address) and the password
                    // for smtp authentification.

                    smtp.setUser("mohamedslimane555@gmail.com");
                    smtp.setPassword("zyrx jiib bvqt yxnv");

                    // Now we create a MimeMessage object. This will be the email.

                    MimeMessage message;

                    message.setSender(new EmailAddress("mohamedslimane555@gmail.com", "Your Name"));
                    message.addRecipient(new EmailAddress("medsl3032002@gmail.com", "Recipient's Name"));
                    message.setSubject("SmtpClient for Qt - Demo");

                    // Now add some text to the email.
                    // First we create a MimeText object.

                    MimeText text;

                    text.setText("Hi,\nThis is a simple email message.\n");

                    // Now add it to the mail

                    message.addPart(&text);

                    // Now we can send the mail

                    smtp.connectToHost();
                    smtp.login();
                    smtp.sendMail(message);
                    smtp.quit();

            // ##############################################


            return a.exec();
        }
        else qDebug() << "fail to connect to db";
        // Start the application event loop




}
