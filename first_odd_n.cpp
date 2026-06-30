#include <iostream>
/*
 * Write a program that reads in a positive integer N and then calculates and
 * displays the sum of the first N odd integers. For example, if N is 4, your
 * program should display the value 16, which is 1 + 3 + 5 + 7.
 */

int main()
{

    int user_num = 0;
    while (user_num <= 0)
    {
        std::cout << "Enter a postive integer: ";
        std::cin >> user_num;
    }

    // sum of first N odd integers is N *N
    // std::cout << user_num * user_num << std::endl;

    int odd = 1;
    int result = 0;
    for (int i = 0; i < user_num; i++)
    {
        result += odd;
        odd += 2;
    }

    std::cout << result << std::endl;

    return 0;
}
