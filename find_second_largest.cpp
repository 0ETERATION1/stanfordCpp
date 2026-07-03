#include <iostream>
/*
 *
 * For a slightly more interesting challenge, write a program that finds both the
 * largest and the second-largest number in a list, prior to the entry of a sentinel.
 * Once again using 0 as the sentinel, a sample run of this program might look like
 * this:
 *
 */

int main()
{
    int sentinal = 0;
    bool check = true;
    int largest;
    int secondLargest;
    int user_input;
    int count = 0;

    std::cout << "This program finds the largest integer in a list." << std::endl;
    std::cout << "Enter 0 to signal the end of the list" << std::endl;

    // 100, 50, 10
    while (check)
    {
        std::cout << " ? ";
        std::cin >> user_input;

        if (user_input == 0)
        {
            break;
        }

        if (count == 0)
        {
            largest = user_input;
            secondLargest = user_input;
            count++;
        }
        else if (user_input > largest)
        {
            secondLargest = largest;
            largest = user_input;
        }
        else if (user_input > secondLargest)
        {
            secondLargest = user_input;
        }
    }
    std::cout << "The largest value was: " << largest << std::endl;
    std::cout << "The second largest value was: " << secondLargest << std::endl;
    return 0;
}