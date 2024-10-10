#ifndef TRACKVIEWMODE_H
#define TRACKVIEWMODE_H

#include <QObject>

class TrackViewMode : public QObject {
    Q_OBJECT

public:
    enum Mode {
        Horizontal,
        Vertical,
        Mixer,
        Terminal

    };

    explicit TrackViewMode(QObject *parent = nullptr);

    // Method to set the view mode
    void setViewMode(Mode mode);

    // Method to get the current view mode
    Mode currentViewMode() const;

signals:
    void viewModeChanged(Mode newMode);

private:
    Mode currentMode; // Holds the current view mode
};

#endif // TRACKVIEWMODE_H
