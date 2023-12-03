#include <iostream>
#include <cstring>

int findNumsAndSum(const char *str)
{
    int length = strlen(str);
    int sum_num = 0, tempInd = 0;
    char temp_str[10];

    for (int x = 0; x < length; x++)
    {
        if (isdigit(str[x]))
        {
            temp_str[tempInd++] = str[x];

            for (int y = x + 1; y < length; y++)
            {
                if (y >= length)
                {
                    break;
                }
                else if (isdigit(str[y]))
                {
                    temp_str[tempInd++] = str[y];
                    x = y;
                }
                else
                {
                    break;
                }
            }

            temp_str[tempInd++] = '\0';
            sum_num += std::stoi(temp_str);
            tempInd = 0;
        }
    }

    return sum_num;
}

int main()
{
    std::cout << "Original string: 91, ABC Street.-> Sum of the numbers: " << findNumsAndSum("91, ABC Street.") << std::endl;
    std::cout << "Original string: w3resource from 2008->  Sum of the numbers: " << findNumsAndSum("w3resource from 2008") << std::endl;
    std::cout << "Original string: C++ Versiuon 14aa11bb23->  Sum of the numbers: " << findNumsAndSum("C++ Versiuon 14aa11bb23") << std::endl;
    std::cout << "Original string: \"Good 4 U\" is a song recorded by American singer - songwriter Olivia Rodrigo, released on May 14, 2021.->  Sum of the numbers: " << findNumsAndSum("\"Good 4 U\" is a song recorded by American singer - songwriter Olivia Rodrigo, released on May 14, 2021.") << std::endl;
}
