#include <iostream>

int main()
{

    enum WeekDays
    {
        Mon = 1,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat,
        Sun
    };
    enum Months
    {
        Jan = 1,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sept,
        Oct,
        Nov,
        Dec
    };
    int n, k, m, y;
    // input validation
    do
    {
        std::cin >> n >> k >> m >> y;
    } while (m <= 0 || m >= 13 || k <= 0 || k >= 8);

    if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
    {
        if (n <= 0 || n >= 32)
        {
            std::cout << "Invalid input!\n";
        }
        else
        {
            std::cout << n;
            switch (k)
            {
            case Mon:
                std::cout << " Mon";
                break;
            case Tue:
                std::cout << " Tue";
                break;
            case Wed:
                std::cout << " Wed";
                break;
            case Thu:
                std::cout << " Thu";
                break;
            case Fri:
                std::cout << " Fri";
                break;
            case Sat:
                std::cout << " Sat";
                break;
            case Sun:
                std::cout << " Sun";
                break;
            }
            switch (m)
            {
            case Jan:
                std::cout << " Jan";
                break;
            case Mar:
                std::cout << " Mar";
                break;
            case May:
                std::cout << " May";
                break;
            case Jul:
                std::cout << " Jul";
                break;
            case Aug:
                std::cout << " Aug";
                break;
            case Oct:
                std::cout << " Oct";
                break;
            case Dec:
                std::cout << " Dec";
                break;
            }
            std::cout << " " << y << std::endl;
        }
    }

    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (n <= 0 || n >= 31)
        {
            std::cout << "Invalid input!\n";
        }
        else
        {
            std::cout << n;
            switch (k)
            {
            case Mon:
                std::cout << " Mon";
                break;
            case Tue:
                std::cout << " Tue";
                break;
            case Wed:
                std::cout << " Wed";
                break;
            case Thu:
                std::cout << " Thu";
                break;
            case Fri:
                std::cout << " Fri";
                break;
            case Sat:
                std::cout << " Sat";
                break;
            case Sun:
                std::cout << " Sun";
                break;
            }
            switch (m)
            {
            case Apr:
                std::cout << " Apr";
                break;
            case Jun:
                std::cout << " Jun";
                break;
            case Sept:
                std::cout << " Sept";
                break;
            case Nov:
                std::cout << " Nov";
                break;
            }
            std::cout << " " << y << std::endl;
        }
    }

    if (m == 2)
    {
        if (n <= 0 || n >= 30)
        {
            std::cout << "Invalid input!\n";
        }
        if (n == 29)
        {
            if (y % 4 == 0 || (y % 400 == 0 && y % 100 != 0))
            {
                std::cout << n;
                switch (k)
                {
                case Mon:
                    std::cout << " Mon";
                    break;
                case Tue:
                    std::cout << " Tue";
                    break;
                case Wed:
                    std::cout << " Wed";
                    break;
                case Thu:
                    std::cout << " Thu";
                    break;
                case Fri:
                    std::cout << " Fri";
                    break;
                case Sat:
                    std::cout << " Sat";
                    break;
                case Sun:
                    std::cout << " Sun";
                    break;
                }
                std::cout << " Feb " << y << std::endl;
            }
            else
            {
                std::cout << "Invalid input!\n";
            }
        }
        else
        {
            std::cout << n;
            switch (k)
            {
            case Mon:
                std::cout << " Mon";
                break;
            case Tue:
                std::cout << " Tue";
                break;
            case Wed:
                std::cout << " Wed";
                break;
            case Thu:
                std::cout << " Thu";
                break;
            case Fri:
                std::cout << " Fri";
                break;
            case Sat:
                std::cout << " Sat";
                break;
            case Sun:
                std::cout << " Sun";
                break;
            }
            std::cout << " Feb " << y << std::endl;
        }
    }
}
