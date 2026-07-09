#include <iostream>

int roundToNearestInt(double x);

int main()
{
    double x = 4.999;

    std::cout << "Original x is: " << x << std::endl;
    std::cout << "Rounded x is: " << roundToNearestInt(x) << std::endl;

    double y = -4.999;

    std::cout << "Original y is: " << y << std::endl;
    std::cout << "Rounded y is: " << roundToNearestInt(y) << std::endl;

    return 0;
}

int roundToNearestInt(double x)
{
    if (x >= 0)
    {
        return int(x + 0.5);
    }
    else
    {
        return int(x - 0.5);
    }
}