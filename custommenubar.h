#ifndef CUSTOMMENUBAR_H
#define CUSTOMMENUBAR_H

#include <QMenuBar>


class CustomMenuBar : public QMenuBar
{
    Q_OBJECT
public:
    explicit CustomMenuBar(QWidget *parent = nullptr);

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
};

#endif // CUSTOMMENUBAR_H
