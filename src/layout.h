#ifndef LAYOUT_H
#define LAYOUT_H

#include <QWidget>

class QMenuBar;
class QMenu;
class QSplitter;
class QVBoxLayout;
class QLineEdit;
class QListWidget;
class QGroupBox;
class QGridLayout;
class QStatusBar;
class QAction;

class Layout : public QWidget
{
    Q_OBJECT

public:
    explicit Layout(QWidget* parent = nullptr);

private:
    void setupMenuBar();
    void setupPanels();
    void setupBrowser();
    void setupPlaylist();

    // Menu components
    QMenuBar* menuBar;
    QMenu* fileMenu;
    QMenu* trackMenu;
    QMenu* viewMenu;
    QMenu* pluginsMenu;
    QMenu* renetMenu;
    QMenu* helpMenu;

    // Panels and layout components
    QSplitter* mainSplitter;
    QWidget* leftPanel;
    QGroupBox* snapPanel;
    QGroupBox* playPanel;
    QGroupBox* audioEditToolsPanel;
    QWidget* browserPanel;
    QLineEdit* searchBar;
    QListWidget* browserList;
    QWidget* playlist;
    QStatusBar* statusBar;
};

#endif // LAYOUT_H
