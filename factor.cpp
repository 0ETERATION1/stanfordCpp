#include <iostream>
/*
 * Every positive integer greater than 1 can be expressed as a product of prime
 * numbers. This factorization is unique and is called the prime factorization.
 * For example, the number 60 can be decomposed into the factors 2 x 2 x 3 x 5,
 * each of which is prime. Note that the same prime can appear more than once in
 * the factorization.
 * Write a program to display the prime factorization of a number n, as
 * illustrated by the following sample run:
 */

int main()
{
    int user_input;
    int count = 2;
    std::string output;

    std::cout << "This program factors a number" << std::endl;
    std::cout << "Enter number to factor: ";
    std::cin >> user_input;

    // 60 / 2 = 30 store the 2
    int factor = 2;
    while (user_input != 1)
    {
        if (user_input % factor != 0)
        {
            factor++;
        }
        else
        {
            user_input /= factor;
            if (user_input == 1)
            {
                std::cout << factor << std::endl;
            }
            else
            {
                std::cout << factor << 'x';
            }
        }
    }
    return 0;
}