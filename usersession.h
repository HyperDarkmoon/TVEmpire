#ifndef USER_SESSION_H
#define USER_SESSION_H

#include <QString>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>

class UserSession {
public:
    static UserSession& getInstance(); // Singleton pattern to get instance
    QString getUsername() const;
    QString getRole() const;
    QString getRFIDAuth() const;
    void setStatus(const QString& status);
    void setUsername(const QString& username);
    void updateRoleFromDatabase(); // Method to update role from the database during login
    void findRFIDAuthAndUpdateStatus(const QString& rfidAuth);

private:
    QString m_username;
    QString m_role;
    QString rfid_auth;
    QString m_status;

    // Private constructor and destructor to enforce singleton pattern
    UserSession();
    ~UserSession();
};

#endif // USER_SESSION_H
