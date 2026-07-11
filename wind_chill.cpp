#include <iostream>
#include <cmath>
// As you can see at the bottom of Figure 2-17, the National Weather Service
// calculates wind chill using the formula
// 35.74 + 0.6215 t – 35.75 v 0.16 + 0.4275 t v 0.16
// where t is the Fahrenheit temperature and v is the wind speed in miles per hour.
// Write a function windChill that takes the values of t and v and returns the
// wind chill. In doing so, your function should take account of two special cases:
// • If there is no wind, windChill should return the original temperature t.
// • If the temperature is greater than 40° F, the wind chill is undefined, and
// your function should call error with an appropriate message.

int windchill(double fahrenheit, double windspeed);

int main()
{
    int fahrenheit;
    double windspeed;
    double windchill_output;

    std::cout << "Enter value for fahrenheit: ";
    std::cin >> fahrenheit;
    std::cout << "Enter value for wind speed: ";
    std::cin >> windspeed;
    windchill_output = windchill(fahrenheit, windspeed);
    std::cout << "WINDCHILL IS: " << windchill_output << std::endl;

    return 0;
}

int windchill(double fahrenheit, double windspeed)
{

    if (windspeed == 0)
    {
        return fahrenheit;
    }
    if (fahrenheit > 40)
    {
        std::cerr << "Wind chill is undefined for temperatures greater than 40 degrees F." << std::endl;
        std::exit(1);
    }
    // 35.74 + 0.6215 t – 35.75 v 0.16 + 0.4275 t v 0.16
    double part1 = 35.74 + (0.6215 * fahrenheit);
    double part2 = 35.75 * (pow(windspeed, 0.16));
    double part3 = (0.4275 * fahrenheit) * (pow(windspeed, 0.16));
    int output = part1 - part2 + part3;
    return output;
}