/********************************************************************************
** Form generated from reading UI file 'addemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMPLOYEE_H
#define UI_ADDEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addEmployee
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_19;
    QLineEdit *empAddress;
    QDateEdit *empDOJ;
    QPushButton *pushButton_2;
    QLabel *id_14;
    QLabel *id_6;
    QComboBox *empDept;
    QDateEdit *empDOB;
    QLabel *label_18;
    QLineEdit *empFather;
    QComboBox *empDesig;
    QLabel *id_7;
    QLineEdit *empEmail;
    QComboBox *empType;
    QLineEdit *empSalary;
    QLabel *id_4;
    QLineEdit *empID;
    QLabel *id_3;
    QLineEdit *empPhone;
    QLabel *id_8;
    QPushButton *pushButton_6;
    QLabel *id_13;
    QLabel *id_9;
    QPushButton *pushButton_5;
    QLabel *id;
    QLabel *id_10;
    QComboBox *empGender;
    QLabel *id_12;
    QLineEdit *empName;
    QLabel *id_2;
    QLabel *id_5;

    void setupUi(QDialog *addEmployee)
    {
        if (addEmployee->objectName().isEmpty())
            addEmployee->setObjectName(QStringLiteral("addEmployee"));
        addEmployee->resize(829, 548);
        buttonBox = new QDialogButtonBox(addEmployee);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 480, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_19 = new QLabel(addEmployee);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(0, 275, 241, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_19->setFont(font);
        empAddress = new QLineEdit(addEmployee);
        empAddress->setObjectName(QStringLiteral("empAddress"));
        empAddress->setGeometry(QRect(0, 215, 761, 32));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        empAddress->setFont(font1);
        empAddress->setStyleSheet(QLatin1String("#empAddress\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDOJ = new QDateEdit(addEmployee);
        empDOJ->setObjectName(QStringLiteral("empDOJ"));
        empDOJ->setGeometry(QRect(260, 420, 240, 32));
        empDOJ->setFont(font1);
        empDOJ->setStyleSheet(QLatin1String("#empDOJ\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        pushButton_2 = new QPushButton(addEmployee);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 420, 41, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2\n"
"{\n"
"	border:none;\n"
"	background:white;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/id_card.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(32, 32));
        id_14 = new QLabel(addEmployee);
        id_14->setObjectName(QStringLiteral("id_14"));
        id_14->setGeometry(QRect(260, 320, 141, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        id_14->setFont(font2);
        id_6 = new QLabel(addEmployee);
        id_6->setObjectName(QStringLiteral("id_6"));
        id_6->setGeometry(QRect(520, 120, 141, 21));
        id_6->setFont(font2);
        empDept = new QComboBox(addEmployee);
        empDept->setObjectName(QStringLiteral("empDept"));
        empDept->setGeometry(QRect(0, 345, 240, 32));
        empDept->setFont(font1);
        empDept->setStyleSheet(QLatin1String("#empDept\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDOB = new QDateEdit(addEmployee);
        empDOB->setObjectName(QStringLiteral("empDOB"));
        empDOB->setGeometry(QRect(520, 70, 240, 32));
        empDOB->setFont(font1);
        empDOB->setStyleSheet(QLatin1String("#empDOB\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDOB->setCurrentSection(QDateTimeEdit::YearSection);
        label_18 = new QLabel(addEmployee);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 0, 241, 31));
        label_18->setFont(font);
        empFather = new QLineEdit(addEmployee);
        empFather->setObjectName(QStringLiteral("empFather"));
        empFather->setGeometry(QRect(260, 70, 240, 32));
        empFather->setFont(font1);
        empFather->setStyleSheet(QLatin1String("#empFather\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empDesig = new QComboBox(addEmployee);
        empDesig->setObjectName(QStringLiteral("empDesig"));
        empDesig->setGeometry(QRect(260, 345, 240, 32));
        empDesig->setFont(font1);
        empDesig->setStyleSheet(QLatin1String("#empDesig\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_7 = new QLabel(addEmployee);
        id_7->setObjectName(QStringLiteral("id_7"));
        id_7->setGeometry(QRect(0, 190, 141, 21));
        id_7->setFont(font2);
        empEmail = new QLineEdit(addEmployee);
        empEmail->setObjectName(QStringLiteral("empEmail"));
        empEmail->setGeometry(QRect(260, 145, 240, 32));
        empEmail->setFont(font1);
        empEmail->setStyleSheet(QLatin1String("#empEmail\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empType = new QComboBox(addEmployee);
        empType->setObjectName(QStringLiteral("empType"));
        empType->setGeometry(QRect(520, 350, 240, 32));
        empType->setFont(font1);
        empType->setStyleSheet(QLatin1String("#empType\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        empSalary = new QLineEdit(addEmployee);
        empSalary->setObjectName(QStringLiteral("empSalary"));
        empSalary->setGeometry(QRect(520, 420, 240, 32));
        empSalary->setFont(font1);
        empSalary->setStyleSheet(QLatin1String("#empSalary\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_4 = new QLabel(addEmployee);
        id_4->setObjectName(QStringLiteral("id_4"));
        id_4->setGeometry(QRect(0, 120, 141, 21));
        id_4->setFont(font2);
        empID = new QLineEdit(addEmployee);
        empID->setObjectName(QStringLiteral("empID"));
        empID->setEnabled(false);
        empID->setGeometry(QRect(0, 420, 201, 32));
        empID->setFont(font1);
        empID->setStyleSheet(QLatin1String("#empID\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_3 = new QLabel(addEmployee);
        id_3->setObjectName(QStringLiteral("id_3"));
        id_3->setGeometry(QRect(520, 45, 141, 21));
        id_3->setFont(font2);
        empPhone = new QLineEdit(addEmployee);
        empPhone->setObjectName(QStringLiteral("empPhone"));
        empPhone->setGeometry(QRect(520, 145, 240, 32));
        empPhone->setFont(font1);
        empPhone->setStyleSheet(QLatin1String("#empPhone\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_8 = new QLabel(addEmployee);
        id_8->setObjectName(QStringLiteral("id_8"));
        id_8->setGeometry(QRect(260, 395, 141, 21));
        id_8->setFont(font2);
        pushButton_6 = new QPushButton(addEmployee);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 480, 150, 32));
        QFont font3;
        font3.setPointSize(10);
        pushButton_6->setFont(font3);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setFocusPolicy(Qt::TabFocus);
        pushButton_6->setStyleSheet(QLatin1String("#pushButton_6\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_6:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        id_13 = new QLabel(addEmployee);
        id_13->setObjectName(QStringLiteral("id_13"));
        id_13->setGeometry(QRect(520, 320, 141, 21));
        id_13->setFont(font2);
        id_9 = new QLabel(addEmployee);
        id_9->setObjectName(QStringLiteral("id_9"));
        id_9->setGeometry(QRect(0, 395, 141, 21));
        id_9->setFont(font2);
        pushButton_5 = new QPushButton(addEmployee);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(610, 480, 150, 32));
        pushButton_5->setFont(font3);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setFocusPolicy(Qt::TabFocus);
        pushButton_5->setStyleSheet(QLatin1String("#pushButton_5\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"}\n"
"\n"
"#pushButton_5:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        id = new QLabel(addEmployee);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(0, 45, 141, 21));
        id->setFont(font2);
        id_10 = new QLabel(addEmployee);
        id_10->setObjectName(QStringLiteral("id_10"));
        id_10->setGeometry(QRect(520, 395, 141, 21));
        id_10->setFont(font2);
        empGender = new QComboBox(addEmployee);
        empGender->setObjectName(QStringLiteral("empGender"));
        empGender->setGeometry(QRect(0, 145, 240, 32));
        empGender->setFont(font1);
        empGender->setStyleSheet(QLatin1String("#empGender\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_12 = new QLabel(addEmployee);
        id_12->setObjectName(QStringLiteral("id_12"));
        id_12->setGeometry(QRect(0, 320, 141, 21));
        id_12->setFont(font2);
        empName = new QLineEdit(addEmployee);
        empName->setObjectName(QStringLiteral("empName"));
        empName->setGeometry(QRect(0, 70, 240, 32));
        empName->setFont(font1);
        empName->setStyleSheet(QLatin1String("#empName\n"
"{\n"
"	background:white;\n"
"	color:black;\n"
"	border:none;\n"
"	padding-left:6px;\n"
"}"));
        id_2 = new QLabel(addEmployee);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(260, 45, 141, 21));
        id_2->setFont(font2);
        id_5 = new QLabel(addEmployee);
        id_5->setObjectName(QStringLiteral("id_5"));
        id_5->setGeometry(QRect(260, 120, 141, 21));
        id_5->setFont(font2);

        retranslateUi(addEmployee);
        QObject::connect(buttonBox, SIGNAL(accepted()), addEmployee, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addEmployee, SLOT(reject()));

        QMetaObject::connectSlotsByName(addEmployee);
    } // setupUi

    void retranslateUi(QDialog *addEmployee)
    {
        addEmployee->setWindowTitle(QApplication::translate("addEmployee", "Dialog", Q_NULLPTR));
        label_19->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">Company Info</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QString());
        id_14->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Designation</span></p></body></html>", Q_NULLPTR));
        id_6->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Phone No</span></p></body></html>", Q_NULLPTR));
        empDept->clear();
        empDept->insertItems(0, QStringList()
         << QApplication::translate("addEmployee", "Male", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Female", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Other", Q_NULLPTR)
        );
        label_18->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#55aaff;\">Personal Info</span></p></body></html>", Q_NULLPTR));
        empDesig->clear();
        empDesig->insertItems(0, QStringList()
         << QApplication::translate("addEmployee", "Male", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Female", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Other", Q_NULLPTR)
        );
        id_7->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Address</span></p></body></html>", Q_NULLPTR));
        empType->clear();
        empType->insertItems(0, QStringList()
         << QApplication::translate("addEmployee", "Fresher", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Experienced", Q_NULLPTR)
        );
        id_4->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Gender</span></p></body></html>", Q_NULLPTR));
        id_3->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Date of Birth</span></p></body></html>", Q_NULLPTR));
        id_8->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Date of Joining</span></p></body></html>", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("addEmployee", "Clear", Q_NULLPTR));
        id_13->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Fresher/Experienced</span></p></body></html>", Q_NULLPTR));
        id_9->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Employee ID</span></p></body></html>", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("addEmployee", "Submit", Q_NULLPTR));
        id->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Name</span></p></body></html>", Q_NULLPTR));
        id_10->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Joining Salary (in \342\202\271)</span></p></body></html>", Q_NULLPTR));
        empGender->clear();
        empGender->insertItems(0, QStringList()
         << QApplication::translate("addEmployee", "Male", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Female", Q_NULLPTR)
         << QApplication::translate("addEmployee", "Other", Q_NULLPTR)
        );
        id_12->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Department</span></p></body></html>", Q_NULLPTR));
        id_2->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Father's Name</span></p></body></html>", Q_NULLPTR));
        id_5->setText(QApplication::translate("addEmployee", "<html><head/><body><p><span style=\" color:#ffffff;\">Email</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addEmployee: public Ui_addEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMPLOYEE_H
