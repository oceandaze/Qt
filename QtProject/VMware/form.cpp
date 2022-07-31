#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowCloseButtonHint);
}

Form::~Form()
{
    delete ui;
}
