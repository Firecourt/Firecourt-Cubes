#ifndef APPLICATIONMODE_H
#define APPLICATIONMODE_H

#include <QObject>

class ApplicationMode : public QObject {
    Q_OBJECT

public:
    enum Mode {
        Musician,
        Producer,
        Engineer
    };

    explicit ApplicationMode(QObject *parent = nullptr);

    // Method to set the application mode
    void setApplicationMode(Mode mode);

    // Method to get the current application mode
    Mode currentApplicationMode() const;

signals:
    void applicationModeChanged(Mode newMode);

private:
    Mode currentMode; // Holds the current application mode
};

#endif // APPLICATIONMODE_H
