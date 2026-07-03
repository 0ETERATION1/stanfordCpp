#include <iostream>
/*
 * Using the AddIntegerList program from Figure 1-5 as a model, write a
 * program AverageList that reads in a list of integers representing exam scores
 * and then prints out the average. Because some unprepared student might
 * actually get a score of 0, your program should use -1 as the sentinel to mark the
 * end of the input.
 */

int main()
{
    int sentinal = -1;
    bool check = true;
    int user_input;
    int sum_scores = 0;
    int score_count = 0;

    std::cout << "This program finds the average of scores entered through the stream" << std::endl;

    while (check)
    {

        // extract user input from stream
        std::cout << "Enter Scores, -1 to stop: ";
        std::cin >> user_input;

        // check value
        if (user_input == -1)
        {
            break;
        }

        // summing scores and increasing counter to find denominator
        sum_scores += user_input;
        score_count++;
    }

    if (score_count == 0)
    {
        std::cout << "No scores were entered." << std::endl;
    }

    std::cout << "Average: " << sum_scores / score_count << std::endl;

    return 0;
}