#include "payroll.h"
#include <sstream>

Payroll::Payroll(QWidget *parent)
    : QWidget(parent)
{
    lblHourlyRate = new QLabel("&Hourly Rate");
    txtHourlyRate = new QLineEdit();
    txtHourlyRate->setAlignment(Qt::AlignRight);
    lblHourlyRate->setBuddy(txtHourlyRate);

    lblHoursWorked = new QLabel("Hours &Worked");
    txtHoursWorked = new QLineEdit();
    txtHoursWorked->setAlignment(Qt::AlignRight);
    lblHoursWorked->setBuddy(txtHoursWorked);

    lblPay = new QLabel("Pay");
    lblPay2 = new QLabel();
    lblPay2->setAlignment(Qt::AlignRight);
    lblPay2->setFrameStyle(QFrame::Raised || QFrame::Panel);

    btnCalculate = new QPushButton(tr("&Calculate"));
    btnExit = new QPushButton(tr("E&xit"));
    btnExit->setFixedWidth(100);

    calc = new Calculate;

    connect(btnCalculate,SIGNAL(clicked()),this,SLOT(calculate_Pay()));
    connect(btnExit,SIGNAL(clicked()),this,SLOT(close()));

    //Layout
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(lblHourlyRate,0,0);
    mainLayout->addWidget(txtHourlyRate,0,1);
    mainLayout->addWidget(lblHoursWorked,1,0);
    mainLayout->addWidget(txtHoursWorked,1,1);
    mainLayout->addWidget(lblPay,2,0);
    mainLayout->addWidget(lblPay2,2,1);
    mainLayout->addWidget(btnCalculate,3,0,Qt::AlignCenter);
    mainLayout->addWidget(btnExit,3,1,Qt::AlignCenter);
    setLayout(mainLayout);


}

Payroll::~Payroll()
{

}

void Payroll::calculate_Pay()
{
    float fPay;
    std::string sPay;
    std::ostringstream ss;

    calc->setHourlyRate(QString(txtHourlyRate->text()).toFloat());
    calc->setHoursWorked(QString(txtHoursWorked->text()).toFloat());

    fPay = calc->getHourlyRate() * calc->getHoursWorked();
    ss << fPay;
    sPay = ss.str();
    lblPay2->setText(QString::fromStdString(sPay));
    txtHourlyRate->setFocus();
    txtHourlyRate->selectAll();
}
