#ifndef TEMPLATESDIALOG_H
#define TEMPLATESDIALOG_H

#include <QDialog>

class TemplatesDialog : public QDialog {
    Q_OBJECT

public:
    explicit TemplatesDialog(QWidget *parent = nullptr);
    ~TemplatesDialog();

private:
    void setupUi(); // Method to set up UI components (if needed)
};

#endif // TEMPLATESDIALOG_H
