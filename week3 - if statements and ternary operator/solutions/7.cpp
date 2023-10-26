#include <iostream>
#include <iomanip>

int main()
{
    int marks;
    double grade;
    std::cin >> marks;
    // switch (marks)
    // {
    // case 0 ... 24:
    //     grade = 2;
    //     break;
    // case 25 ... 39:
    //     grade = 3;
    //     break;
    // case 40 ... 59:
    //     grade = 4;
    //     break;
    // case 60 ... 79:
    //     grade = 5;
    //     break;
    // case 80 ... 100:
    //     grade = 6;
    //     break;
    // default:
    //     std::cout << "Invalid marks" << std::endl;
    //     return 0;
    // }
    if (marks >= 0 && marks < 25)
    {
        grade = 2;
    }
    else if (marks >= 25 && marks < 40)
    {
        grade = 3;
    }
    else if (marks >= 40 && marks < 60)
    {
        grade = 4;
    }
    else if (marks >= 60 && marks < 80)
    {
        grade = 5;
    }
    else if (marks >= 80 && marks <= 100)
    {
        grade = 6;
    }
    else
    {
        std::cout << "Invalid marks" << std::endl;
        return 0;
    }
    std::cout << std::fixed << std::setprecision(2) << grade << std::endl;
}