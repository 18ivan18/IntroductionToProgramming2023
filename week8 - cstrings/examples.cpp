#include <iostream>

// string
// "Hello"
int main()
{
    // undefined, could be 0
    int i;
    bool b = true;
    char c = '\0';
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char str1[5] = {'a', 'b', '\0', '\0', '\0'};
    char str2[5] = {'a', 'b'};
    char str3[7] = {'a', 'a', 'a', 'a', 'a', 'a', 'a'};
    std::cout << str << str1 << '\0' << str2 << str3 << std::endl;
    char str4[7] = "ab"; // ok
    // str4 = "abc"; // не е ок
    str[0] = 'i';
    char input[10];
    // std::cin >> input; // не е ок
    std::cin.getline(input, 10);
    std::cout << input;
}