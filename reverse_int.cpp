#include <iostream>
/*
 * Using the digitSum function from the section entitled “The while statement”
 * as a model, write a program that reads in an integer and then displays the
 * number that has the same digits in the reverse order, as illustrated by this
 * sample run:
 */

int main()
{
    int user_input;
    int digit = 0;
    int output = 0;
    std::cout << "This program reverses the digits in an integer" << std::endl;
    std::cout << "Enter a integer: ";
    std::cin >> user_input;
    while (user_input != 0)
    {
        // extracting right most digit
        int val = user_input % 10;

        // storing right most digit in output
        output = output * 10 + val;

        // cutting out right most digit from user_input
        user_input /= 10;
    }

    std::cout << "The reversed integer: " << output << std::endl;

    return 0;
}