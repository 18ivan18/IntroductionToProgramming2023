#include <iostream>
#include <cmath>

const int MAX_ELEMENTS = 20;

int main()
{
    int n, closest;
    double average = 0;
    std::cin >> n;
    int arr[MAX_ELEMENTS];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        average += arr[i];
    }

    average /= n;
    closest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(average - arr[i]) < closest)
        {
            closest = arr[i];
        }
    }

    std::cout << "Average: " << average << std::endl;
    std::cout << "Closest: " << closest << std::endl;
}
