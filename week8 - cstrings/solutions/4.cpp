#include <iostream>

const int MAX_ASCI = (1 << 8) - 1;

int main()
{
    // hystogram
    int symbols[MAX_ASCI] = {0};

    char ch;
    int idx = 0;

    do
    {
        std::cin.get(ch);
        symbols[(int)ch]++;
    } while (ch != '!');

    for (int i = 0; i < MAX_ASCI; i++)
    {
        if (symbols[i] != 0)
        {
            std::cout << (char)i << " -- " << symbols[i] << std::endl;
        }
    }
}