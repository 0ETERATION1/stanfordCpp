#include <cctype>
#include <string>
#include <iostream>

// Implement a function capitalize(str) that returns a string in which the
// initial character is capitalized (if it is a letter) and all other letters are converted
// to lowercase. Characters other than letters are not affected. For example, both
// capitalize("BOOLEAN") and capitalize("boolean") should return
// the string "Boolean".

std::string capitalize(const std::string &str);

int main()
{

    std::cout << capitalize("BOOLEAN") << '\n';
    std::cout << capitalize("   boolean") << '\n';
    std::cout << capitalize("   boolean      hello") << '\n';

    return 0;
}

std::string capitalize(const std::string &str)
{
    std::string output = str;

    if (str.empty())
    {
        return str;
    }

    bool found_first = false;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (std::isalpha(output[i]))
        {
            if (found_first == false)
            {
                output[i] = std::toupper(output[i]);
                found_first = true;
            }
            else
            {
                output[i] = std::tolower(output[i]);
            }
        }
    }
    return output;
}