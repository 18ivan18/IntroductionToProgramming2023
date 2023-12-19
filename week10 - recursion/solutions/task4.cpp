#include <iostream>

void reverse(const char *c)
{
    if (!*c)
    {
        return;
    }
    reverse(c + 1);
    std::cout << *c;
}

int main()
{
    reverse("I'm Ivan");
}