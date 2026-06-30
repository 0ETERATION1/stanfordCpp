#include <iostream>
/*
 * As mathematical historians have told the story, the German mathematician Carl
 * Friedrich Gauss (1777-1855) began to show his mathematical talent at a very
 * early age. When he was in elementary school, Gauss was asked by his teacher
 * to compute the sum of the numbers between 1 and 100. Gauss is said to have
 * given the answer instantly: 5050. Write a program that computes the answer to
 * the question Gauss’s teacher posed.
 */

int main()
{
    int result = 0;
    for (int i = 1; i <= 100; i++)
    {
        result += i;
    }
    std::cout << result << std::endl;
    return 0;
}