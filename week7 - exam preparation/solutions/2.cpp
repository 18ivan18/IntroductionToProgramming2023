#include <iostream>
#include <cassert>
#include <climits>

bool isAdjacent(int n)
{
    int prev = 0;
    do
    {
        prev = n % 10;
        n /= 10;
        if (n % 10 == prev)
        {
            return false;
        }
    } while (n);

    return true;
}

// returns negative number is there are no neightbouring numbers
int differenceBetweenMaxAndMinAdjacent(int start, int end)
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = start; i <= end; i++)
    {
        if (isAdjacent(i))
        {
            if (i < min)
            {
                min = i;
            }

            if (i > max)
            {
                max = i;
            }
        }
    }
    if (min == INT_MAX && max == INT_MIN)
    {
        return -1;
    }

    return max - min;
}

int main()
{
    assert(isAdjacent(2572) == true);
    assert(isAdjacent(3119) == false);

    assert(differenceBetweenMaxAndMinAdjacent(9, 100) == 89);
    assert(differenceBetweenMaxAndMinAdjacent(1099, 1222) == 18);
    assert(differenceBetweenMaxAndMinAdjacent(110, 115) < 0);
    int diff = differenceBetweenMaxAndMinAdjacent(9, 100);
    if (diff < 0)
    {
        std::cout << diff << std::endl;
    }
    else
    {
        std::cout << "No adjacent numbers!";
    }
}