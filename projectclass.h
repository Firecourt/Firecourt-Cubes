#ifndef PROJECTCLASS_H
#define PROJECTCLASS_H


#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class projectClassData;

class projectClass
{
    Q_OBJECT
    QML_ELEMENT
public:
    projectClass();
    projectClass(const projectClass &);
    projectClass &operator=(const projectClass &);
    ~projectClass();

private:
    QSharedDataPointer<projectClassData> data;
};

#endif // PROJECTCLASS_H
