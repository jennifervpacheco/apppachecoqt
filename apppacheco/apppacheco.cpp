#include "apppacheco.h"
#include "ui_apppacheco.h"

apppacheco::apppacheco(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::apppacheco)
{
    ui->setupUi(this);
}

apppacheco::~apppacheco()
{
    delete ui;
}
