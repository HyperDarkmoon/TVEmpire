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


// Private constructor and destructor
UserSession::UserSession() = default;
UserSession::~UserSession() = default;
