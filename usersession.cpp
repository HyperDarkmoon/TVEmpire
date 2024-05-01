#include "usersession.h"
#include <QDebug>
#include <QSql>
#include <QSqlError>

UserSession& UserSession::getInstance() {
    static UserSession instance; // Static instance of UserSession
    return instance;
}

QString UserSession::getUsername() const {
    return m_username;
}

QString UserSession::getRole() const {
    return m_role;
}

void UserSession::setUsername(const QString& username) {
    m_username = username;
}

QString UserSession::getRFIDAuth() const {
    return rfid_auth;
}

void UserSession::setStatus(const QString& status) {
    m_status = status;
}

void UserSession::updateRoleFromDatabase() {
    // Retrieve role from the database based on the current username
    QSqlQuery query;
    query.prepare("SELECT post FROM employees WHERE login = ?");
    query.addBindValue(m_username);

    if (query.exec()) {
        if (query.next()) {
            m_role = query.value(0).toString();
        } else {
            qDebug() << "No role found for username:" << m_username;
        }
    } else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
}

void UserSession::findRFIDAuthAndUpdateStatus(const QString& rfidAuth) {
    // Check if the RFIDAuth exists in the database
    QSqlQuery query;
    query.prepare("SELECT rfid_auth FROM employees WHERE rfid_auth = ?");
    query.addBindValue(rfidAuth);

    if (query.exec()) {
        if (query.next()) {
            // RFIDAuth found, set status to "Present" locally
            setStatus("Present");
            qDebug() << "RFIDAuth found for:" << rfidAuth << "- Status set to Present";

            // Now update the status in the database
            QSqlQuery updateQuery;
            updateQuery.prepare("UPDATE employees SET status = 'Present' WHERE rfid_auth = ?");
            updateQuery.addBindValue(rfidAuth);

            if (updateQuery.exec()) {
                qDebug() << "Status updated to Present in the database for RFIDAuth:" << rfidAuth;
            } else {
                qDebug() << "Failed to update status in the database:" << updateQuery.lastError().text();
            }
        } else {
            qDebug() << "No RFIDAuth found for:" << rfidAuth;
        }
    } else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }
}



// Private constructor and destructor
UserSession::UserSession() = default;
UserSession::~UserSession() = default;
