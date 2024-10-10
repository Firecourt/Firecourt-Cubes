#ifndef LAYOUT_H
#define LAYOUT_H

#include <QWidget>
#include <QMenu>
#include <QMenuBar>
#include <QSplitter>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QListWidget>
#include <QGroupBox>
#include <QGridLayout>
#include <QStatusBar>

class Layout : public QWidget {
    Q_OBJECT

public:
    explicit Layout(QWidget* parent = nullptr);

private slots:
    void createFileMenu();
    void createTrackMenu();
    void createPluginMenu();
    void createRenetMenu();
    void createHelpMenu();


private:

    QMenu* createFileMenu(QMenuBar* menuBar);
    QMenu* createTrackMenu(QMenuBar* menuBar);
    QMenu* createViewMenu(QMenuBar* menuBar);
    QMenu* createPluginsMenu(QMenuBar* menuBar);
    QMenu* createRenetMenu(QMenuBar* menuBar);
    QMenu* createHelpMenu(QMenuBar* menuBar);
    QWidget* createLeftPanel();
    QWidget* createBrowserPanel();
    QWidget* createPlaylist();
};

#endif // LAYOUT_H
