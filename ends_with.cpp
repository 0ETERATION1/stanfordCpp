#include <string>
#include <iostream>

// Implement the function endsWith(str, suffix), which returns true if
// str ends with suffix. Like its startsWith counterpart, the endsWith
// function should allow the second argument to be either a string or a character

bool endsWith(const std::string &str, const std::string &isuffix);

int main()
{
    // std::cout << endsWith("Hello", "o") << '\n';
    std::cout << endsWith("hello", "lo") << '\n';    // true
    std::cout << endsWith("hello", "hello") << '\n'; // true
    std::cout << endsWith("hello", "he") << '\n';    // false
    std::cout << endsWith("hello", "world") << '\n'; // false
    // std::cout << endsWith("hello", 'o') << '\n';     // true
    // std::cout << endsWith("hello", 'h') << '\n';     // false

    return 0;
}

bool endsWith(const std::string &str, const std::string &suffix)
{

    if (suffix.length() > str.length())
    {
        return false;
    }

    //
    //    lo
    // hello
    // start loop from the end of string
    // size_t size_suffix = suffix.length();
    size_t str_start_counter = (str.length() - suffix.length());

    for (size_t i = 0; i < suffix.length(); i++)
    {
        if (str[str_start_counter] != suffix[i])
        {
            return false;
        }
        str_start_counter++;
    }
    return true;
}