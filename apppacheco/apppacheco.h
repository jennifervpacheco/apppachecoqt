#ifndef APPPACHECO_H
#define APPPACHECO_H

#include <QMainWindow>

namespace Ui {
class apppacheco;
}

class apppacheco : public QMainWindow
{
    Q_OBJECT

public:
    explicit apppacheco(QWidget *parent = 0);
    ~apppacheco();

private:
    Ui::apppacheco *ui;
};

#endif // APPPACHECO_H
