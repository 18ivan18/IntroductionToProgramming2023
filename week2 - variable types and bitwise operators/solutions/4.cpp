#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int firstNumber;
    int secondNumber;

    std::cin >> firstNumber >> secondNumber;

    std::cout << "сума: " << firstNumber + secondNumber << std::endl;
    std::cout << "абс. стойност: " << abs(firstNumber - secondNumber) << std::endl;
    std::cout << "остатък: " << firstNumber % secondNumber << std::endl;
    std::cout << "цяла част: " << firstNumber / secondNumber << std::endl;

    // за да може операторът "/" (за деление) да смята не целочислено деление, а това, с което сме свикнали,
    // е необходимо поне един (а може и двата) от операндите да бъде нецелочислен, т.е. double;
    // затова ни се налага преобразуване на поне единия операнд; трите начина отдолу връщат един и същи резултат
    // с разлика в това коя от двете променливи преобразуваме от int към double;
    std::cout << "частно: " << (double)firstNumber / secondNumber << std::endl;
    /*std::cout << "частно: " << a / (double)b << std::endl; 
	std::cout << "частно: " << (double)a / (double)b << std::endl;*/

    std::cout << "долна скоба: " << floor(firstNumber / secondNumber) << std::endl;
    std::cout << "горна скоба: " << ceil((double)firstNumber / (double)secondNumber) << std::endl;
    std::cout << "степенуване: " << pow(firstNumber, sqrt(secondNumber)) << std::endl;

    // функцията setprecision(int number_of_digits) ни дава извеждане на искания брой цифри след десетината запетая;
    // за да можем да я използваме, ни е необходим хедъра <iomanip>
    std::cout << "логаритмуване: " << std::fixed << std::setprecision(5) << log(floor(firstNumber / secondNumber)) / log(2) << std::endl;
}