#include <string>
#include <iostream>
#include <cctype>

// The strlib.h function exports a function trim(str) that returns a new
// string formed by removing all whitespace characters from the beginning and
// end of str. Write the corresponding implementation.

// string trim(string str);
// Returns a new string after removing any whitespace characters from the beginning and end of the argument.
// Usage:

// string trimmed = trim(str);

// pass by reference
std::string trim(const std::string &str);

int main()
{

    // std::cout << trim(" hi    ") << '\n';

    // should remove from beginning and end NOT MIDDLE
    std::cout << trim("   HELLO WORLD!    ") << '\n';
    std::cout << trim("      ") << '\n';

    return 0;
}

std::string trim(const std::string &str)
{

    if (str.empty())
    {
        return "";
    }
    std::string output;

    size_t found_start_of_str = str.length();
    size_t found_end_of_str = 0;

    // we need 2 for loops. one to detect start of the string
    // and one to loop from end of the string
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isspace(str[i]))
        {
            found_start_of_str = i;
            break;
        }
    }

    if (found_start_of_str == str.length())
    {
        return ""; // empty string or all whitespace
    }

    for (int i = static_cast<int>(str.length()) - 1; i >= found_start_of_str; i--)
    {
        if (!std::isspace(str[i]))
        {
            found_end_of_str = i;
            break;
        }
    }

    output = str.substr(found_start_of_str, (found_end_of_str - found_start_of_str) + 1);

    return output;
}
