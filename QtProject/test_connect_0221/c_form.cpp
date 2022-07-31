#include "c_form.h"
#include "ui_c_form.h"

C_Form::C_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::C_Form)
{
    ui->setupUi(this);
}

C_Form::~C_Form()
{
    delete ui;
}
