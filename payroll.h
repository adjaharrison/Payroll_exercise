#ifndef PAYROLL_H
#define PAYROLL_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QString>
#include "calculate.h"

class QLabel;
class QLineEdit;
class QPushButton;
class Calculate;
class QString;

class Payroll : public QWidget
{
    Q_OBJECT

private:
    QLabel* lblHoursWorked;
    QLabel* lblHourlyRate;
    QLabel* lblPay;
    QLabel* lblPay2;

    QLineEdit* txtHoursWorked;
    QLineEdit* txtHourlyRate;

    QPushButton* btnCalculate;
    QPushButton* btnExit;

public:
    Payroll(QWidget *parent = 0);
    Calculate *calc;
    ~Payroll();
public slots:
    void calculate_Pay();
};

#endif // PAYROLL_H
