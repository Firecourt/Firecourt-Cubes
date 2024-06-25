#include "custommenubar.h"
#include <QMouseEvent>
#include <QCursor>

CustomMenuBar::CustomMenuBar(QWidget *parent) : QMenuBar(parent)
{
    // Install event filter
    installEventFilter(this);
}

bool CustomMenuBar::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == this && event->type() == QEvent::Enter) {
        // When mouse enters the menu bar area, set cursor shape to pointing hand
        QCursor cursor(Qt::PointingHandCursor);
        setCursor(cursor);
    }
    return QMenuBar::eventFilter(obj, event);
}
