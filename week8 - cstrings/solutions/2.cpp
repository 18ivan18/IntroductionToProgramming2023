#include <iostream>

char *strcpy(char *destination, const char *source)
{
    if (destination == nullptr)
    {
        return nullptr;
    }

    char *ptr = destination;

    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';

    // the destination is returned by standard `strcpy()`
    return ptr;
}

int main()
{
    char source[] = "Yay cstrings";
    char destination[25];

    std::cout << strcpy(destination, source) << std::endl;

    std::cout << destination << std::endl;
}
