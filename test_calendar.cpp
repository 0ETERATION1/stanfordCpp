#include "calendar.h"
#include <iostream>
int main()
{

    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    for (int i = JANUARY; i <= DECEMBER; i++)
    {
        Month month = static_cast<Month>(i);

        std::cout << month_to_string(month)
                  << " has "
                  << days_in_month(month, year)
                  << " days."
                  << std::endl;
    }

    return 0;
}