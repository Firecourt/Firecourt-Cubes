#ifndef PROJECT_H
#define PROJECT_H
#include <QFile>

class Project
{
public:
    Project() : modified(false) {}

    bool loadFromFile(const QString& fileName) {
        // Logic to load project data from a file
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            return false;
        }
        // Load data
        modified = false;
        this->fileName = fileName;
        return true;
    }

    bool saveToFile(const QString& fileName) {
        // Logic to save project data to a file
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            return false;
        }
        // Save data
        modified = false;
        this->fileName = fileName;
        return true;
    }

    void clear() {
        // Clear the project data (reset to initial state)
        tracks.clear();
        modified = false;
        fileName.clear();
    }

    void setName(const QString& name) {
        projectName = name;
    }

    QString getFileName() const {
        return fileName;
    }

    bool isModified() const {
        return modified;
    }

    void markModified() {
        modified = true;
    }

    void importFile(const QString& fileName) {
        // Logic to import files into the project
        // For example, add the file as a track or resource
        tracks.append(fileName); // Example track list
        modified = true;
    }

    // Add more project-related methods as needed

private:
    QString projectName;
    QString fileName;
    bool modified;
    QList<QString> tracks; // Example list of tracks
};

#endif // PROJECT_H
