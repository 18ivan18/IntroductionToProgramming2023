#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    if (n > m)
    {
        int temp = n;
        n = m;
        m = temp;
    }
    int i = n, u = 1, sum = 0;
    while (i <= m)
    {
        while (u <= m)
        {
            if (u < i)
            {
                if (i % u == 0)
                {
                    sum = sum + u;
                }
            }
            u++;
        }
        if (sum == i)
        {
            std::cout << i << "\n";
        }
        i++;
        u = 1;
        sum = 0;
    }
}