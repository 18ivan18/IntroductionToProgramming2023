#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "The frequency of " << i << " = ";
        count = 0;
        for (int j = n; j > 0; j = j / 10)
        {
            if (j % 10 == i)
            {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
}