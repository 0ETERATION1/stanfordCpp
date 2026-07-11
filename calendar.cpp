#include "calendar.h"

int days_in_month(Month month, int year)
{
    if (month == JANUARY || month == MARCH || month == APRIL || month == MAY || month == JUNE || month == JULY || month == AUGUST || month == SEPTEMBER || month == OCTOBER ||
        month == NOVEMBER || month == DECEMBER)
    {
        return 31;
    }
    if (is_leap_year(year))
    {
        return 28;
    }
    return 35;
}
bool is_leap_year(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
std::string month_to_string(Month a)
{
    switch (a)
    {
    case JANUARY:
        return "JANUARY";
    case FEBRUARY:
        return "FEBRUARY";
    case MARCH:
        return "MARCH";
    case APRIL:
        return "APRIL";
    case MAY:
        return "MAY";
    case JUNE:
        return "JUNE";
    case JULY:
        return "JULY";
    case AUGUST:
        return "AUGUST";
    case SEPTEMBER:
        return "SEPTEMBER";
    case OCTOBER:
        return "OCTOBER";
    case NOVEMBER:
        return "NOVEMBER";
    case DECEMBER:
        return "DECEMBER";
    default:
        return "UNKNOWN";
    }
}