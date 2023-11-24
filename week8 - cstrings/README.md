# FAQ

## Какво е символен низ и защо е по-различен от масив от символи?
Символният низ завършва със знакът `\0`, наречен **терминираща нула**. Това е и нулевата стойност на типът `char`, т.е. числото 0 превърнато в char (`ASCII`). Това ни позволява да намерим дължината на низа итерирайки го (броим символите до достигане на `\0`), нещо, което не можем да направим с масивите от числа. Това обаче означава, че трябва да се съобразяваме с дължината на масива. Нека не забравяме, че винаги трябва да предвидим 1 място повече за край на низа.

## Как работя с тях?
Като с нормални масиви. Има особенност при въвеждане и извеждане от клавиатурата. За по-лесно операторите за вход и изход да предефинирани. Операторът за вход слага терминираща нула.
```c++
const int MAX_SIZE = 256;
char str[MAX_SIZE];
std::cin >> str; // лош подход, грешка когато въведем низ с повече от 256 символа
std::cin.getline(input, MAX_SIZE); // взима първите 256 символа или до наличие на символа delimiter (подаден като трети аргуемнт на getline, по подразбиране е нов ред)
std::cout << str;
```
А можем и да ги декларираме като масив.
```c++
char str[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // трябва да сложим терминираща нула сами
char str1[5] = {'a', 'b', '\0', '\0', '\0'};
char str2[5] = {'a', 'b'}; // слага терминираща нула
char str3[7] = {'a', 'a', 'a', 'a', 'a', 'a', 'a'}; // не слага терминираща нула
char str4[7] = "ab"; // слага терминираща нула
```
## Как работя по-лесно с тях?
Можем да ползваме функциите от библиотеката `<cstring>`.
```c++
#include <cstring>

char song[] = "We Will Rock You!";

// print the length of the song string
std::cout << strlen(song); // 17

char src[] = "Hello Programmers.";
    
// large enough to store content of src
char dest[20];

// copy the contents of src to dest    
strcpy(dest,src);
  
std::cout << dest; // Hello Programmers.

char dest[50] = "Learning C++ is fun";
char src[50] = " and easy";

strcat(dest, src);
    
std::cout << dest; // Learning C++ is fun and easy

char str[] = "Programming is easy.";
char ch = 'r';
    
if (strchr(str, ch)){
    std::cout << ch << " is present \"" << str << "\"";
} else {
    std::cout << ch << " is not present \"" << str << "\"";
}

char dest[50] = "Using strncat function,";
char src[50] = " this part is added and this is ignored";

strncat(dest, src, 19);
    
std::cout << dest; // Using strncat function, this part is added


char str1[] = "Megadeth";
char str2[] = "Metallica";

// compare str1 and str2 lexicographically
int result = strcmp(str1, str2); // returns 0, negative or positive number
// result == -1
```

## Във фунцкии ги подаваме като масив.
```c++
void f(char* str) {
    int size = strlen(str);
    for(int i = 0; i < size; i++) {
        // ...
    }
    while(*str) {
        // ...
        str++;
    }
}
```

# Задачи
## Задача 1
Напишете функция, която намира дължината на символен низ. ("strlen")

**Example 1:**
```c++
Input: str = "Hello World."
Output: 12
```

## Задача 2
Напишете функция, която въвежда символен низ str1 и прави негово 
копие в str2. ("strcpy")

- Поведението е неопределено ако паметта заделена за `dest` не е достатъчна.
 
**Example 1:**
```c++
char* strcpy(char* dest, const char* src);
```

## Задача 3
Напишете функция, която сравнява два символни низа лексикографски 
– низ str1 и str2. Да се върне 0, ако двата низа са еднакви, отрицателно число ако първия 
различен символ от str1 е с по-малка стойност от този от str2 и положително число, в 
противен случай.
 
**Example 1:**
```c++
Input: str1 = "Megadeth", str2 = "Metallica"
Output: -1
```

## Задача 4
Да се прочете изречение от конзолата и да се изведе за всеки символ 
дали се среща и колко пъти се среща във въведеното изречение(да се 
въвежда до знака '!').
 
**Example 1:**
```c++
Input: str1 = "Hello World!"
Output: d:1, e:1, h:1, l:3, o:2, r:1, w:1 
```

## Задача 5
Въведен е символен низ - изречение. Подредете думите в него в лексикографски ред. За дума броим поредица от главни и малки латински букви, без пунктуационни знаци и интервали. 

 
**Example 1:**
```c++
Input: str1 = "I love to eat, but for that I have to cook - I hate this!"
```
```
Output: 
I 
I 
I 
but 
cook 
eat 
for 
hate 
have 
love 
that 
this 
to 
to 
```


**Constraints:**

- 0 < `strlen(str1)` < 1024



## Задача 6
Реализирайте следните функции

- toUpper() and toLower() convert the case of characters in a string using a specified locale.
- reverse()
- eraseFirst() will remove the first occurrence in the source string.
- eraseNth() will remove the nth occurrence in the source string.
- eraseAll() will remove all occurrences of a particular character from a string.
- replaceFirst() will replace the first occurrence in the source string.
- replaceNth() will replace the nth occurrence in the source string.
- replaceAll() will replace all occurrences of a particular character from a string.

**Examples:**
```c++
Input: str = "Hello"
Output: Converted to uppercase: HELLO
        Converted to lowercase: hello
        Erase first l: Helo
        Erase nth l: Helo
        Erase all l: Heo
        str = "hello_world_!"
        Replace first _ with -: hello-world_!
        Replace nth _ with -: hello_world-!
        Replace all _ with -: hello-world-!  
```


## Задача 7
Напишете функция, която сортира буквите (числа и пунктоация не се включват) на символен низ. 

**Example 1:**
```c++
Input: str = "python"
Output: hnopty
```

## Задача 8
Напишете функция, която намира най-голямата дума в даден символен низ.

**Example 1:**
```c++
Input: str = "C++ is a general-purpose programming language."
Output: programming
```

## Задача 9
Напишете функция, която превръща всяка дума от даден символен низ в дума с главна първа буква и останалите са малки.

**Example 1:**
```c++
Input: str = "ThIS iS a nOrmAl SenTeNCe."
Output: This Is A Normal Sentence.
```

## Задача 10
Напишете функция, която намира думата с най-много повтарящи се букви в даден символен низ.

**Example 1:**
```c++
Input: str = "Print a welcome text in a separate line."
Output: separate
```
## Задача 11
Напишете функция, която намира сумата на всички числа в даден символен низ.

**Example 1:**
```c++
Input: str = "\"Good 4 U\" is a song recorded by American singer-songwriter Olivia Rodrigo, released on May 14, 2021.\""
Output: 2039
```

<!-- ## Задача 12
По дадено неотрицателно цяло число изведете неговото изписване на английски език

**Example 1:**
```c++
Input: 12
Output: Twelve
```

**Example 2:**
```c++
Input: 29
Output: Twenty Nine
```  -->

## Задача 12
Напишете функция, която проверява дали даден низ е подредица на друг.

**Example 1:**
```c++
Input: src = "apple", pattern = "apl"
Output: true
```

**Example 2:**
```c++
Input: src = "CGTTCGGCTATCGTACGTTCTATTCTATGATTTCTAA", pattern = "CGTTCGGCTATGCZTTCTACTTATTCTA"
Output: false
```