#ifndef USER_SESSION_H
#define USER_SESSION_H

#include <QString>
#include <QSqlQuery>
#include <QVariant>

class UserSession {
public:
    static UserSession& getInstance(); // Singleton pattern to get instance
    QString getUsername() const;
    QString getRole() const;
    void setUsername(const QString& username);
    void updateRoleFromDatabase(); // Method to update role from the database during login

private:
    QString m_username;
    QString m_role;

    // Private constructor and destructor to enforce singleton pattern
    UserSession();
    ~UserSession();
};

#endif // USER_SESSION_H
