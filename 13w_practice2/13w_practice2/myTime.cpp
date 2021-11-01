#include <iostream>
#include <iomanip>

using namespace std;

#include "myTime.h"

myTime::myTime()
{
    hour = minute = second = 0;
}

void myTime::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void myTime::printUniversal()
{
    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":"
        << setw(2) << second;
}

void myTime::printStandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
        << ":" << setfill('0') << setw(2) << minute
        << ":" << setw(2) << second
        << (hour < 12 ? " AM" : " PM");

}
