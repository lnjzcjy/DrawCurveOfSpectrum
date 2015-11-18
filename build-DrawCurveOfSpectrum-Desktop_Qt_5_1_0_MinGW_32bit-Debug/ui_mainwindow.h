/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_file;
    QAction *actionClose_current_file;
    QAction *actionSave_the_picture;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuDrawCurve;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(669, 487);
        actionOpen_file = new QAction(MainWindow);
        actionOpen_file->setObjectName(QStringLiteral("actionOpen_file"));
        actionClose_current_file = new QAction(MainWindow);
        actionClose_current_file->setObjectName(QStringLiteral("actionClose_current_file"));
        actionSave_the_picture = new QAction(MainWindow);
        actionSave_the_picture->setObjectName(QStringLiteral("actionSave_the_picture"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 23));
        menuDrawCurve = new QMenu(menuBar);
        menuDrawCurve->setObjectName(QStringLiteral("menuDrawCurve"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDrawCurve->menuAction());
        menuDrawCurve->addSeparator();
        menuDrawCurve->addAction(actionOpen_file);
        menuDrawCurve->addAction(actionClose_current_file);
        menuDrawCurve->addAction(actionSave_the_picture);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOpen_file->setText(QApplication::translate("MainWindow", "Open file", 0));
        actionClose_current_file->setText(QApplication::translate("MainWindow", "Close current file", 0));
        actionSave_the_picture->setText(QApplication::translate("MainWindow", "save the picture", 0));
        menuDrawCurve->setTitle(QApplication::translate("MainWindow", "DrawCurve", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
