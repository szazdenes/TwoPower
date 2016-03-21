#ifndef TWOPOWER_H
#define TWOPOWER_H

#include <QMainWindow>
#include <QtMath>

namespace Ui {
class TwoPower;
}

class TwoPower : public QMainWindow
{
    Q_OBJECT

public:
    explicit TwoPower(QWidget *parent = 0);
    ~TwoPower();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TwoPower *ui;
    void writeToList(QString str);
};

#endif // TWOPOWER_H
