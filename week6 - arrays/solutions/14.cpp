#include <iostream>
#include <cmath>
int main()
{
    int timeSeries[] = {1, 4}, n = sizeof(timeSeries) / sizeof(timeSeries[0]), duration = 2;

    int total = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        total += std::min(timeSeries[i + 1] - timeSeries[i], duration);
    }

    std::cout << total + duration << std::endl;
}