#include <iostream>
// An integer greater than 1 is said to be prime if it has no divisors other than
// itself and one. The number 17, for example, is prime, because there are no
// numbers other than 1 and 17 that divide evenly into it. The number 91,
// however, is not prime because it is divisible by 7 and 13. Write a predicate
// method isPrime(n) that returns true if the integer n is prime, and false
// otherwise. To test your algorithm, write a main program that lists the prime
// numbers between 1 and 100

void is_prime(int n);

int main()
{
    for (int i = 2; i <= 100; i++)
    {
        is_prime(i);
    }
    return 0;
}

void is_prime(int n)
{
    // starting counter at 2 because a number is always going to be
    // divisible by itself and 1
    int counter = 2;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            counter++;
        }
    }

    if (counter == 2)
    {
        std::cout << n << " is a prime number!" << std::endl;
    }
    return;
}