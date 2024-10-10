#include "layout.h"
#include <QMenuBar>
#include <QMenu>
#include <QSplitter>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QListWidget>
#include <QGroupBox>
#include <QGridLayout>
#include <QStatusBar>
#include <QAction>

Layout::Layout(QWidget* parent) : QWidget(parent) {
    // Main layout for the window
    auto* mainLayout = new QVBoxLayout(this);

    // Menu Bar
    auto* menuBar = new QMenuBar(this);

    // File Menu
    auto* fileMenu = createFileMenu(menuBar);

    // Track Menu
    auto* trackMenu = createTrackMenu(menuBar);

    // View Menu
    auto* viewMenu = createViewMenu(menuBar);

    // Plugins Menu
    auto* pluginsMenu = createPluginsMenu(menuBar);

    // Renet Menu
    auto* renetMenu = createRenetMenu(menuBar);

    // Help Menu
    auto* helpMenu = createHelpMenu(menuBar);

    mainLayout->setMenuBar(menuBar);

    // Main splitter to separate left and right panels
    auto* mainSplitter = new QSplitter(Qt::Horizontal, this);

    // Left Panel
    auto* leftPanel = createLeftPanel();
    mainSplitter->addWidget(leftPanel);

    // Right Splitter (contains browser and playlist)
    auto* rightSplitter = new QSplitter(Qt::Vertical, this);
    auto* browserPanel = createBrowserPanel();
    rightSplitter->addWidget(browserPanel);

    auto* playlist = createPlaylist();
    rightSplitter->addWidget(playlist);

    mainSplitter->addWidget(rightSplitter);

    // Add the main splitter to the main layout
    mainLayout->addWidget(mainSplitter);

    // Set up a status bar
    auto* statusBar = new QStatusBar(this);
    mainLayout->addWidget(statusBar);

    // Set the layout for the main window
    setLayout(mainLayout);
}

QMenu* Layout::createFileMenu(QMenuBar* menuBar) {
    auto* fileMenu = menuBar->addMenu("File");

    auto* newProjectMenu = fileMenu->addMenu("New Project..");
    newProjectMenu->addAction("Empty Project");
    newProjectMenu->addAction("Templates");

    fileMenu->addAction("Open File");
    fileMenu->addAction("Open Project");
    fileMenu->addAction("Save");
    fileMenu->addAction("Save As");

    auto* modeMenu = fileMenu->addMenu("Mode");
    modeMenu->addAction("Musician");
    modeMenu->addAction("Producer");
    modeMenu->addAction("Engineer");

    auto* settingsMenu = fileMenu->addMenu("Settings");
    settingsMenu->addAction("Appearance");
    settingsMenu->addAction("General");
    settingsMenu->addAction("MDI");
    settingsMenu->addAction("Devices");
    settingsMenu->addAction("Renet");

    auto* preferencesMenu = fileMenu->addMenu("Preferences");
    preferencesMenu->addAction("Console");
    preferencesMenu->addAction("Margins");
    preferencesMenu->addAction("Theme");

    fileMenu->addAction("Exit");

    return fileMenu;
}

QMenu* Layout::createTrackMenu(QMenuBar* menuBar) {
    auto* trackMenu = menuBar->addMenu("Track");
    trackMenu->addAction("New Track");
    trackMenu->addAction("Select Track");
    trackMenu->addAction("Select All Tracks");
    trackMenu->addAction("Edit Track");
    trackMenu->addAction("Delete Track");
    return trackMenu;
}

QMenu* Layout::createViewMenu(QMenuBar* menuBar) {
    auto* viewMenu = menuBar->addMenu("View");
    viewMenu->addAction("Zoom In");
    viewMenu->addAction("Zoom Out");
    viewMenu->addAction("Horizontal");
    viewMenu->addAction("Vertical");
    viewMenu->addAction("Terminal");
    return viewMenu;
}

QMenu* Layout::createPluginsMenu(QMenuBar* menuBar) {
    auto* pluginsMenu = menuBar->addMenu("Plugins");
    pluginsMenu->addAction("Mixer");
    pluginsMenu->addAction("EQ");
    pluginsMenu->addAction("Instruments");
    pluginsMenu->addAction("Effects");
    return pluginsMenu;
}

QMenu* Layout::createRenetMenu(QMenuBar* menuBar) {
    auto* renetMenu = menuBar->addMenu("Renet");
    renetMenu->addAction("Open");
    renetMenu->addAction("Dialogbox");
    renetMenu->addAction("Message Box");
    renetMenu->addAction("Close");
    return renetMenu;
}

QMenu* Layout::createHelpMenu(QMenuBar* menuBar) {
    auto* helpMenu = menuBar->addMenu("Help");
    helpMenu->addAction("Tutor");
    helpMenu->addAction("Documentation");
    helpMenu->addAction("What is...");
    return helpMenu;
}

QWidget* Layout::createLeftPanel() {
    auto* leftPanel = new QWidget(this);
    auto* leftPanelLayout = new QVBoxLayout(leftPanel);

    // Snap Panel
    auto* snapPanel = new QGroupBox("Snap Panel", leftPanel);
    leftPanelLayout->addWidget(snapPanel);

    // Play Panel
    auto* playPanel = new QGroupBox("Play Panel", leftPanel);
    leftPanelLayout->addWidget(playPanel);

    // Audio Edit Tools Panel
    auto* audioEditToolsPanel = new QGroupBox("Audio Edit Tools Panel", leftPanel);
    leftPanelLayout->addWidget(audioEditToolsPanel);

    leftPanel->setLayout(leftPanelLayout);
    return leftPanel;
}

QWidget* Layout::createBrowserPanel() {
    auto* browserPanel = new QWidget(this);
    auto* browserLayout = new QVBoxLayout(browserPanel);

    auto* searchBar = new QLineEdit(browserPanel);
    searchBar->setPlaceholderText("Search...");
    browserLayout->addWidget(searchBar);

    auto* browserList = new QListWidget(browserPanel);
    browserList->setToolTip("Hover over an item for more details");
    browserLayout->addWidget(browserList);

    browserPanel->setLayout(browserLayout);
    return browserPanel;
}

QWidget* Layout::createPlaylist() {
    auto* playlist = new QWidget(this);
    auto* playlistLayout = new QGridLayout(playlist);
    playlist->setLayout(playlistLayout);
    playlist->setToolTip("Drag and drop tracks here");
    return playlist;
}
