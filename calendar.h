#ifndef CALENDAR_H
#define CALENDAR_H
#include <string>

enum Month
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int days_in_month(Month month, int year);
bool is_leap_year(int year);
std::string month_to_string(Month a);

#endif