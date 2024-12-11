/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Misesoustension;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QSlider *horizontalSlider;
    QComboBox *comboBox;
    QPushButton *DemarrageDrone;
    QLabel *EtatTension;
    QLabel *EtatDemarrage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Misesoustension = new QPushButton(centralwidget);
        Misesoustension->setObjectName("Misesoustension");
        Misesoustension->setGeometry(QRect(230, 140, 121, 24));
        Misesoustension->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255)"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(230, 290, 91, 22));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(230, 320, 78, 22));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(230, 250, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(230, 210, 72, 24));
        DemarrageDrone = new QPushButton(centralwidget);
        DemarrageDrone->setObjectName("DemarrageDrone");
        DemarrageDrone->setGeometry(QRect(400, 140, 121, 24));
        DemarrageDrone->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255)"));
        EtatTension = new QLabel(centralwidget);
        EtatTension->setObjectName("EtatTension");
        EtatTension->setGeometry(QRect(230, 180, 131, 21));
        EtatDemarrage = new QLabel(centralwidget);
        EtatDemarrage->setObjectName("EtatDemarrage");
        EtatDemarrage->setGeometry(QRect(410, 180, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Misesoustension->setText(QCoreApplication::translate("MainWindow", "Mise sous tension", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        DemarrageDrone->setText(QCoreApplication::translate("MainWindow", "D\303\251marrage du drone", nullptr));
        EtatTension->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        EtatDemarrage->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
