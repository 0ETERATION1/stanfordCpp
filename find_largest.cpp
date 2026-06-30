#include <iostream>
#include <algorithm>
/*
 * Write a program that reads in a list of integers from the user until the user
 * enters the value 0 as a sentinel. When the sentinel appears, your program
 * should display the largest value in the list, as illustrated in the following sample
 * run
 */

int main()
{
    const int sentinal = 0;
    int user_input = -99999;
    int curr_max = -99999;

    std::cout << "This program finds the largest integer in a list. Enter 0 to signal the end of the list " << std::endl;

    while (user_input != sentinal)
    {
        std::cout << "?" << " ";
        std::cin >> user_input;
        curr_max = std::max(curr_max, user_input);
    }

    std::cout << "The largest value was: " << curr_max << std::endl;

    return 0;
}