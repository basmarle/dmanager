#include "dmanager.h"
#include "ui_dmanager.h"

Dmanager::Dmanager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dmanager)
{
    ui->setupUi(this);
}

Dmanager::~Dmanager()
{
    delete ui;
}
