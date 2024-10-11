#include "layout.h"
#include "mainwindow.h"
#include "settingsdialog.h" // Include the SettingsDialog header
#include "terminaldialog.h" // Include the TerminalDialog header
#include <QMenuBar>
#include <QMenu>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QStatusBar>
#include <QAction>
#include <QProcess>

// Constructor for the Layout class
Layout::Layout(MainWindow *mainWindow, QWidget *parent)
    : QWidget(parent), mainWindow(mainWindow) {

    // Create the main layout
    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    // Create the menu bar
    QMenuBar *menuBar = new QMenuBar(this);

    // Create "File" menu
    QMenu *fileMenu = new QMenu("File", this);
    QMenu *newProjectMenu = new QMenu("New Project..", this);
    newProjectMenu->addAction("Empty Project", this, &Layout::fileOpenRequested);
    newProjectMenu->addAction("Templates", this, &Layout::fileOpenRequested);
    fileMenu->addMenu(newProjectMenu);
    fileMenu->addAction("Open File", this, &Layout::fileOpenRequested);
    fileMenu->addAction("Open Project", this, &Layout::projectOpenRequested);
    fileMenu->addAction("Save", this, &Layout::fileSaveRequested);
    fileMenu->addAction("Save As...", this, &Layout::fileSaveAsRequested);
    fileMenu->addAction("Exit", this, &Layout::exitRequested);

    // Create "Mode" menu
    QMenu *modeMenu = new QMenu("Mode", this);
    modeMenu->addAction("Musician");
    modeMenu->addAction("Producer");
    modeMenu->addAction("Engineer");
    fileMenu->addMenu(modeMenu);

    // Create "Settings" menu
    QMenu *settingsMenu = new QMenu("Settings", this);
    settingsMenu->addAction("Appearance", this, &Layout::openSettingsDialog); // Action to open settings dialog
    settingsMenu->addAction("General");
    settingsMenu->addAction("MIDI");
    settingsMenu->addAction("Devices");
    settingsMenu->addAction("Renet");
    fileMenu->addMenu(settingsMenu);

    // Create "Preferences" menu
    QMenu *preferencesMenu = new QMenu("Preferences", this);
    preferencesMenu->addAction("Console");
    preferencesMenu->addAction("Margins");
    preferencesMenu->addAction("Theme");
    fileMenu->addMenu(preferencesMenu);

    // Add actions to the "File" menu
    fileMenu->addAction("Compile", this, &Layout::fileOpenRequested);
    fileMenu->addAction("Exit", this, &Layout::exitRequested);

    // Add "File" menu to the menu bar
    menuBar->addMenu(fileMenu);

    // Create "Track" menu
    QMenu *trackMenu = new QMenu("Track", this);
    trackMenu->addAction("New Track", this, &Layout::fileOpenRequested);
    trackMenu->addAction("Select Track");
    trackMenu->addAction("Select All Tracks");
    trackMenu->addAction("Edit Track", this, &Layout::editTrackRequested);
    trackMenu->addAction("Delete Track", this, &Layout::deleteTrackRequested);
    menuBar->addMenu(trackMenu);

    // Create "View" menu
    QMenu *viewMenu = new QMenu("View", this);
    viewMenu->addAction("Zoom In", this, &Layout::zoomInRequested);
    viewMenu->addAction("Zoom Out", this, &Layout::zoomOutRequested);
    viewMenu->addAction("Horizontal", this, &Layout::setHorizontalViewRequested);
    viewMenu->addAction("Vertical", this, &Layout::setVerticalViewRequested);
    viewMenu->addAction("Terminal", this, &Layout::showTerminalRequested);
    menuBar->addMenu(viewMenu);

    // Create "Plugins" menu
    QMenu *pluginsMenu = new QMenu("Plugins", this);
    pluginsMenu->addAction("Mixer");
    pluginsMenu->addAction("EQ");
    pluginsMenu->addAction("Instruments");
    pluginsMenu->addAction("Effects");
    menuBar->addMenu(pluginsMenu);

    // Create "Renet" menu
    QMenu *renetMenu = new QMenu("Renet", this);
    renetMenu->addAction("Open", this, &Layout::openRenet); // Connect to slot
    renetMenu->addAction("Dialog Box");
    renetMenu->addAction("Message Box");
    renetMenu->addAction("Close", this, &Layout::closeRenetRequested);
    menuBar->addMenu(renetMenu);

    // Create "Help" menu
    QMenu *helpMenu = new QMenu("Help", this);
    helpMenu->addAction("Tutor", this, &Layout::openTutor); // Connect to slot
    helpMenu->addAction("Documentation");
    helpMenu->addAction("What is?");
    menuBar->addMenu(helpMenu);

    // Add the menu bar to the main layout
    mainLayout->setMenuBar(menuBar);

    // Create a text edit widget
    QTextEdit *textEdit = new QTextEdit(this);
    textEdit->setTabletTracking(true);

    // Add the text edit to the main layout
    mainLayout->addWidget(textEdit);

    // Create the status bar
    QStatusBar *statusBar = new QStatusBar(this);
    mainLayout->addWidget(statusBar);

    // Set the layout for the central widget
    setLayout(mainLayout);
}
void Layout::showTerminalRequested() {
    TerminalDialog *terminalDialog = new TerminalDialog(this);
    terminalDialog->setModal(true);

    // Start the shell or terminal when the dialog is shown
#ifdef Q_OS_WIN
    terminalDialog->executeCommand("cmd.exe");
#elif defined(Q_OS_UNIX)
    terminalDialog->executeCommand("/bin/bash");
#elif defined (Q_OS_UNIX)
    terminalDialog->executeCommand("/bin/zsh");
#endif

    terminalDialog->exec();
}

// Slot to open the settings dialog
void Layout::openSettingsDialog() {
    SettingsDialog settingsDialog(this);
    if (settingsDialog.exec() == QDialog::Accepted) {
        // Apply the settings if needed
        // You can add logic here to respond to the user's choices
    }
}
