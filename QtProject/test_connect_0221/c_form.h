#ifndef C_FORM_H
#define C_FORM_H

#include <QWidget>

namespace Ui {
class C_Form;
}

class C_Form : public QWidget
{
    Q_OBJECT

public:
    explicit C_Form(QWidget *parent = 0);
    ~C_Form();

private:
    Ui::C_Form *ui;
};

#endif // C_FORM_H
