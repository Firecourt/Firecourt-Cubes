/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirecourtStudio
{
public:
    QAction *actionGuide;
    QAction *actionManuals;
    QAction *actionControls;
    QAction *actionNew_Track;
    QAction *actionSelect_Track;
    QAction *actionAudio_Settings;
    QAction *actionMIDI_Settings;
    QAction *actionGeneral_Settings;
    QAction *actionAppearance_Settings;
    QAction *actionPlugin;
    QAction *actionSearch_Bar;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuTrack;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FirecourtStudio)
    {
        if (FirecourtStudio->objectName().isEmpty())
            FirecourtStudio->setObjectName(QString::fromUtf8("FirecourtStudio"));
        FirecourtStudio->resize(800, 600);
        actionGuide = new QAction(FirecourtStudio);
        actionGuide->setObjectName(QString::fromUtf8("actionGuide"));
        actionManuals = new QAction(FirecourtStudio);
        actionManuals->setObjectName(QString::fromUtf8("actionManuals"));
        actionControls = new QAction(FirecourtStudio);
        actionControls->setObjectName(QString::fromUtf8("actionControls"));
        actionNew_Track = new QAction(FirecourtStudio);
        actionNew_Track->setObjectName(QString::fromUtf8("actionNew_Track"));
        actionSelect_Track = new QAction(FirecourtStudio);
        actionSelect_Track->setObjectName(QString::fromUtf8("actionSelect_Track"));
        actionAudio_Settings = new QAction(FirecourtStudio);
        actionAudio_Settings->setObjectName(QString::fromUtf8("actionAudio_Settings"));
        actionAudio_Settings->setCheckable(true);
        actionMIDI_Settings = new QAction(FirecourtStudio);
        actionMIDI_Settings->setObjectName(QString::fromUtf8("actionMIDI_Settings"));
        actionGeneral_Settings = new QAction(FirecourtStudio);
        actionGeneral_Settings->setObjectName(QString::fromUtf8("actionGeneral_Settings"));
        actionAppearance_Settings = new QAction(FirecourtStudio);
        actionAppearance_Settings->setObjectName(QString::fromUtf8("actionAppearance_Settings"));
        actionPlugin = new QAction(FirecourtStudio);
        actionPlugin->setObjectName(QString::fromUtf8("actionPlugin"));
        actionSearch_Bar = new QAction(FirecourtStudio);
        actionSearch_Bar->setObjectName(QString::fromUtf8("actionSearch_Bar"));
        centralwidget = new QWidget(FirecourtStudio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        FirecourtStudio->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FirecourtStudio);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTrack = new QMenu(menubar);
        menuTrack->setObjectName(QString::fromUtf8("menuTrack"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        FirecourtStudio->setMenuBar(menubar);
        statusbar = new QStatusBar(FirecourtStudio);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FirecourtStudio->setStatusBar(statusbar);

        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuTrack->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menuHelp->addAction(actionGuide);
        menuHelp->addAction(actionManuals);
        menuHelp->addAction(actionControls);
        menuTrack->addAction(actionNew_Track);
        menuTrack->addAction(actionSelect_Track);
        menuOptions->addAction(actionAudio_Settings);
        menuOptions->addAction(actionMIDI_Settings);
        menuOptions->addAction(actionGeneral_Settings);
        menuOptions->addAction(actionAppearance_Settings);
        menuOptions->addAction(actionPlugin);
        menuOptions->addAction(actionSearch_Bar);

        retranslateUi(FirecourtStudio);

        QMetaObject::connectSlotsByName(FirecourtStudio);
    } // setupUi

    void retranslateUi(QMainWindow *FirecourtStudio)
    {
        FirecourtStudio->setWindowTitle(QCoreApplication::translate("FirecourtStudio", "MainWindow", nullptr));
        actionGuide->setText(QCoreApplication::translate("FirecourtStudio", "&Guide...", nullptr));
        actionManuals->setText(QCoreApplication::translate("FirecourtStudio", "&Manuals...", nullptr));
        actionControls->setText(QCoreApplication::translate("FirecourtStudio", "&Controls", nullptr));
        actionNew_Track->setText(QCoreApplication::translate("FirecourtStudio", "&New Track..", nullptr));
        actionSelect_Track->setText(QCoreApplication::translate("FirecourtStudio", "&Select Track...", nullptr));
        actionAudio_Settings->setText(QCoreApplication::translate("FirecourtStudio", "&Audio Settings", nullptr));
        actionMIDI_Settings->setText(QCoreApplication::translate("FirecourtStudio", "&MIDI Settings", nullptr));
        actionGeneral_Settings->setText(QCoreApplication::translate("FirecourtStudio", "&General Settings", nullptr));
        actionAppearance_Settings->setText(QCoreApplication::translate("FirecourtStudio", "App&earance Settings", nullptr));
        actionPlugin->setText(QCoreApplication::translate("FirecourtStudio", "&Plugin...", nullptr));
        actionSearch_Bar->setText(QCoreApplication::translate("FirecourtStudio", "&Search Bar", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("FirecourtStudio", "Help", nullptr));
        menuTrack->setTitle(QCoreApplication::translate("FirecourtStudio", "Track", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("FirecourtStudio", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirecourtStudio: public Ui_FirecourtStudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
