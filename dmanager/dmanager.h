#ifndef DMANAGER_H
#define DMANAGER_H

#include <QMainWindow>

namespace Ui {
class Dmanager;
}

class Dmanager : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dmanager(QWidget *parent = 0);
    ~Dmanager();

private:
    Ui::Dmanager *ui;
};

#endif // DMANAGER_H
