#include <iostream>

int main()
{
    std::cout << "Ivan Arabadzhiyski" << std::endl;
    int myAge = 25;

    // &променлива взима адреса на променливата; sizeof(променлива) взима размера на променливата; вж. теория.pdf, стр. 5
    std::cout << myAge << "->" << &myAge << "->" << sizeof(myAge);
}