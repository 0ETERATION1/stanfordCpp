#include <iostream>
#include <algorithm>
/*
 * For a slightly more interesting challenge, write a program that finds both the
 * largest and the second-largest number in a list, prior to the entry of a sentinel.
 * Once again using 0 as the sentinel, a sample run of this program might look like
 *
 */

int main()
{
    std::cout << "This program finds the largest integer in a list." << std::endl;
    std::cout << "Enter 0 to signal the end of the list" << std::endl;

    const int sentinal = 0;
    int largest = -9999;
    int second_largest = -9999;
    int user_input = -1;

    // [223, 251, 317, 1, 6]
    // u = 251
    // l = 223
    // sl = 223

    std::cout << " ? ";
    std::cin >> user_input;
    largest = user_input;
    second_largest = user_input;
    std::cout << "outisde" << std::endl;

    while (user_input != sentinal)
    {

        std::cout << " ? ";
        std::cin >> user_input;

        if (user_input > largest)
        {
            second_largest = largest;
        }

        largest = std::max(largest, user_input);
    }

    std::cout << "The largest value was: " << largest << std::endl;
    std::cout << "The second largest value was: " << second_largest << std::endl;

    return 0;
}