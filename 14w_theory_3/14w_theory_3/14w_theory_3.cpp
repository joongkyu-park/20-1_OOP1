﻿
#include <iostream>

using namespace std;


// 3번


class Date {

public:
    Date(int = 1, int = 1, int = 1990);
    void print();

private:
    int month;
    int day;
    int year;
};

Date::Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void Date::print()
{
    cout << month << '-' << day << '-' << year;
}

int main()
{
    Date date1(7, 4, 2002);
    Date date2;

    cout << "date1 = ";
    date1.print();
    cout << "\ndate2 = ";
    date2.print();

    date2 = date1;

    cout << "\n\nAfter default memberwise assignment, date2 = ";
    date2.print();
    cout << endl;

    return 0;
}
