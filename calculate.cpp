#include "calculate.h"


void Calculate::setHourlyRate(float rate)
{
    gHourlyRate = rate;
}

void Calculate::setHoursWorked(float hours)
{
    gHoursWorked = hours;
}

float Calculate::getHourlyRate() {return gHourlyRate;}
float Calculate::getHoursWorked() {return gHoursWorked;}
float Calculate::getPay()
{
    float pay;
    pay = getHourlyRate() * getHoursWorked();
    return pay;
}
