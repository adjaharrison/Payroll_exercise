#ifndef CALCULATE_H
#define CALCULATE_H

#include <cstring>

class Calculate
{
private:
    float gHoursWorked;
    float gHourlyRate;

public:
    void setHoursWorked(float hours);
    float getHoursWorked();
    void setHourlyRate (float rate);
    float getHourlyRate();
    float getPay();
};

#endif // CALCULATE_H
