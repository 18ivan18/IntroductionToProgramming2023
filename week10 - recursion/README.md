# FAQ

Функция, която извиква себе си, наричаме рекурсивна функция. Оттам и техниката е позната като рекурсия.

Често се използва за решаване на математически проблеми дефинирани чрез рекурентни редици.

```c++
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    }
    return 1;
}
```

![](https://cdn.programiz.com/sites/tutorial2program/files/cpp-function-recursion-example.png)

Характерно за рекурентните фунцкии е наличието на т.нар. дъно на рекурсията, извършване на работа върху данните и рекурсивно извикване.

## Плюсове и минуси (Pros and cons)
+ Често кодът е по-чист и по-кратък използвайки рекурсията умело
+ Необходима в по-сериозни алгоритми върху структури от данни, теория на графите и тн.



- Отнема повече стеково пространство в сравнение с итеративна програма
- Използва повече процесорно време
- Понякога е по-трудно и за дебъгване

```c++
int fibonnaci(int x)
{
    // дъно
    if (x <= 1)
    {
        return x;
    }
    // рекурсивно извикване
    return (fibonnaci(x - 1) + fibonnaci(x - 2));
}
```

## Опашкова рекурсия (Tail recursion)
Опашковата рекурсия се дефинира като рекурсивна функция, в която последното нещо, което се изпълнява, е рекурсивно извикване на фукнция. На практика нищо не се изпълнява след рекурсивното извикване.

Необходимостта от опашкова рекурсия се появява, защото тези функции могат да бъдат оптимизирани от компилатора.

### Къде е проблемът?
Компилаторите използват стек за да изпълняват рекурсивните извиквания, всяко извикване създава нова стекова рамка (в която се пази информация за самото извикване, променливи и тн.). При прекалено голяма дълбочина можем да надминем ограничението за стеково място. С други думи рекурсивните функции използват повече стекова памет.

### Какво представлява оптимизацията?
Спестяваме един `return`.

```c++
unsigned int factorial(unsigned int n)
{
    // Recursion termination condition
    if (n == 0)
    {
        return 1;
    }

    return n*factorial(n-1);   
}
```

**Асембли еквивалент с коментари**
```
factorial(unsigned int):
        mov     eax, 1     ; The default return value eax=1
        test    edi, edi   ; Check if the input parameter n is 0
        je      .L1        ; If n is 0, just return
.L2:                       ; Loop return variable
        imul    eax, edi   ; eax = eax*n
        sub     edi, 1     ; n = n-1
        jne     .L2        ; Loop if n is non-zero
.L1:                       ; Jump label for n==0 case
        ret                ; Return result in eax
```
https://medium.com/software-design/tail-call-optimization-in-c-829b4b257c9a
# Задачи

## Задачa 1
Да се напише рекурсивна функция, която представя число от десетична в двоична 
бройна система. 

**Example 1:**
```
Input: n = 123
Output: 1111011
```

## Задачa 2
Въведете числата x от тип double и n от тип int. Да се напише програма, която 
намира стойността на израза чрез рекурсия: 

`sum = (...((((x + 2)x + 3)x + 4)x + 5)...)x + (n-1))x + n;` 

## Задачa 3
Дадени са естествените числа n и k, където `1 ≤ k ≤ n`. Да се дефинира рекурсивна 
функция, която намира сумата на естествените числа от 1 до n със стъпка k. 

**Example 1:**

```
Input: n = 15, k = 3
Output: 1 + 4 + 7 + 10 + 13 = 35 
```

## Задачa 4
Да се напише рекурсивна функция, която принтира даден низ на обратно.

**Example 1:**

```c++
Input: str = "I'm Ivan"
Output: "navI m'I"
 ```
## Задачa 5
Да се напише рекурсивна функция, която намира сумата на цифрите в дадено число.

**Example 1:**

```c++
Input: n = 1998
Output: 27
Explanation: 1 + 9 + 9 + 8 = 27
```
## Задачa 6
Да се напише рекурсивна функция, която намира най-големия общ делител на най-голямото и най-малкото число в даден масив от числа.

**Example 1:**

```c++
Input: nums = [2,5,6,9,10]
Output: 2
Explanation:
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.
```
**Example 2:**

```
Input: nums = [7,5,6,8,3]
Output: 1
Explanation:
The smallest number in nums is 3.
The largest number in nums is 8.
The greatest common divisor of 3 and 8 is 1.
```

## Задачa 7
Даден е израз, формулиран чрез числа, знаци за събиране, изваждане, умножение и деление. Да 
се напише функция, която пресмята стойността му. 

**Example 1:**
```
Input: s = "3+2*2"
Output: 7
```
**Example 2:**
```
Input: s = " 3/2 "
Output: 1
```

**Example 3:**
```
Input: s = " 3+5 / 2 "
Output: 5
```

**Constraints:**

- `1 <= s.length <= 3 * 10^5`
- s consists of integers and operators `('+', '-', '*', '/')` separated by some number of spaces.
- `s` represents a **valid expression.**
- All the integers in the expression are non-negative integers in the range `[0, 2^31 - 1]`.
- The answer is guaranteed to fit in a 32-bit integer.

А сега ако включим и скоби?
**Example 4:**
```
"1 + 1" = 2
" 6-4 / 2 " = 4
"2*(5+5*2)/3+(6/2+8)" = 21
"(2+6* 3+5- (3*14/7+2)*5)+3"=-12
```

## Задачa 8
### Двоичното търсене
По даден сортиран масив от цели числа в нарастващ ред и число, което търсим в дадения масив, напишете функция, която търси числото в масива. Ако това число се намира в масива, върнете неговия индекс. Иначе върнете -1. 

Алгоритъмът трябва да има сложност по време O(log n).


 

**Example 1:**
```
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
```
**Example 2:**
```
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
```

**Constraints:**

- 1 <= nums.length <= 10<sup>4</sup>
- -10<sup>4</sup> < nums[i], target < 10<sup>4</sup>
- All the integers in nums are unique.
- nums is sorted in ascending order. 

Как работи `binary search`?
- намира лява и дясна граница на редица 
- намира средата 
- ако елементът точно в средата е търсеният от нас, връща индекса 
- ако елементът в средата е по-голям от търсения от нас, повтаря алгоритъма 
в лявата част 
- ако елементът в средата е по-малък от търсения от нас, повтаря алгоритъма 
в дясната част 
- ако границите се срещнат и елементът не е открит, връща -1. 
Напишете функция, реализираща двоично търсене( масивът от числа, който се подава на 
функцията трябва да е предварително сортиран!). 


 
## Задачa 9
### Backtracking
Даден е лабиринт под формата на матрица `NxM`, където свободно квадратче се 
отбелязва с `.`, а стена – с `-`. Намерете има ли път от квадратче `0x0` до квадратче `(N-1)x(M-1)`, движейки се в четирите основни посоки (нагоре, надолу, наляво, надясно).

```
Пример: 
Вход: 
4 4 
. - - . 
. . - - 
. - . . 
. . . . 
Изход: 
Yes 
```
```
Вход: 
3 5 
. - - . . 
- . - - - 
. . . . . 
Изход: 
No 
```