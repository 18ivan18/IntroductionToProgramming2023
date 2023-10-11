# FAQ
Какво значи да деларирам променлива?
```c++
int i;
char c;
bool b;
long long ll;
```

Какво значи да инициализирам променлива?
```c++
int i = 5;
```

Какво значи да присвоя стойност на променлива?
```c++
int i;
// ...
i = 10;
```

Какво значи да въведа променлива от стандартния вход?
```c++
int i;
std::cin >> i;
```


Какво значи да изведа променлива на стандартния изход / конзолата?
```c++
int i = 6;
std::cout << i;
```

# Задача 1

Изведете името си на конзолата.

Декларирайте и инициализирайте целочислената променлива myАge с подходяща стойност и
изведете на един ред на конзолата нейната стойност, адреса ѝ и размера ѝ, разделени с "->".

**Example 1:**
```
Output: Ivan Arabadzhiyski
23->0x7fffd362e224->4
```


# Задача 2
Напишете програма, която принтира големината на фундаменталните типове променливи.

```c++
Output: 
The sizeof(char) is: 1 bytes
The sizeof(short) is: 2 bytes
The sizeof(int) is: 4 bytes
The sizeof(long) is: 8 bytes
The sizeof(long long) is: 8 bytes
The sizeof(float) is: 4 bytes
The sizeof(double) is: 8 bytes
The sizeof(long double) is: 16 bytes
The sizeof(bool) is: 1 bytes
```

# Задача 3
Напишете програма, която извежда долните и горните граници на стойностите на числата.

```c++
The maximum limit of int data type: 2147483647
The minimum limit of int data type: -2147483648
The maximum limit of unsigned int data type: 4294967295
The maximum limit of long long data type: 9223372036854775807
The minimum limit of long long data type: -9223372036854775808
The maximum limit of unsigned long long data type: 18446744073709551615
The Bits contain in char data type: 8
The maximum limit of char data type: 127
The minimum limit of char data type: -128
The maximum limit of signed char data type: 127
The minimum limit of signed char data type: -128
The maximum limit of unsigned char data type: 255
The minimum limit of short data type: -32768
The maximum limit of short data type: 32767
The maximum limit of unsigned short data type: 65535
```

# Задача 4
Да се напише програма, която въвежда две положителни цели числа `a` и `b` и извежда на различни редове на конзолата:

`а)` тяхната сума;

`б)` абсолютната стойност на тяхната разлика;

`в)` остатъка при деление на първото с второто число;

`г)` цялата част на частното на двете числа;

`д)` частното на а със b;

`е)` частното на a със b, закръглено надолу;

`ж)` частното на a със b, закръглено нагоре;

`з)` а, повдигнато на степен корен квадратен от b;

`щ)` логаритъм от числото, получено в `е)`, при основа `2`. Изведеното число да бъде с *точност до `петия`*
знак след десетичната запетая.

**Example 1:**
```c++
Input: 21 4
Output: сума: 25
абсолютна стойност: 17
остатък: 1
цяла част: 5
частно: 5.25
долна скоба: 5
горна скоба: 6
степенуване: 441
логаритмуване: 2.32193
```
<details><summary><b>Hint 1</b></summary>
<p>

![](https://wikimedia.org/api/rest_v1/media/math/render/svg/81f4aabf553fafd2911de73c64faf911450e0bda)
</p>
</details>
<br>

# Задача 5
Да се напише програма, която въвежда две десетични променливи `a` и `b` и разменя стойностите им:

`а)` чрез помощна променлива;

`б)` чрез аритметични операции.

**Example 1:**
```c++
Input: 7 18
Output: a = 18, b = 7
```
# Задача 6
Да се напише програма, която въвежда едно **положително четирицифрено число** и извежда цифрите му в **обратен** ред,
разделени със символа `-`.

**Example 1:**
```c++
Input: 1234
Output: 4-3-2-1
```
# Задача 7
Да се напише програма, която въвежда символ от клавиатурата и отпечатва `ASCII` кода му.

**Example 1:**
```c++
Input: a
Output: 97
```
# Задача 8
Да се напише програма, която въвежда десетично число и изведетa неговата цяла част на конзолата.

**Example 1:**
```c++
Input: 3.14
Output: 3
```
# Задача 9
Дадено е цяло число `n`, изведете `true` ако то е степен на двойката. Иначе, изведете `false`.

Цяло число `n` е степен на двойката, ако съществува цяло число `х`, такова че `n = 2`<sup>`x`</sup>.


**Example 1:**
```c++
Input: n = 1
Output: true
```
Explanation: 2<sup>0</sup> = 1


**Example 2:**
```c++
Input: n = 16
Output: true
```
Explanation: 2<sup>4</sup> = 16

**Example 3:**
```c++
Input: n = 3
Output: false
```

**Example 4:**
```c++
Input: n = 4
Output: true
```
**Example 5:**
```c++
Input: n = 5
Output: false
```
<details><summary><b>Hint 1</b></summary>
<p>
Използвайте побитови операции
</p>
</details>
<br>

# Задача 10
Напишете програма, която проверява дали едно число е четно или нечетно.

**Example 1:**
```c++
Input: n = 1
Output: false
```
**Example 2:**
```c++
Input: n = 16
Output: true
```

<details><summary><b>Hint 1</b></summary>
<p>
Използвайте остатък при делене.
</p>
</details>


<details><summary><b>Hint 2</b></summary>
<p>
Използвайте побитови операции.
</p>
</details>
<details><summary><b>Hint 3</b></summary>
<p>

 Eдно число е нечетно тстк в двоичния му запис последният му бит е 1;

Aко приложим конюнкция (и) върху нашето число и числото 1 (0001), получим резултат, различен от 1, то значи нашето число е четно;

Иначе казано, с този метод проверяваме дали последният бит на числото не 1. Ако е 1, и приложим "и" с 1, трябва да получим 1, ако получим 1, значи числото ни е нечетно


**Example:**
```
5 & 1 == 0101 & 0001 == 0001 == 1 => 5 е нечетно;
4 & 1 == 0100 & 0001 == 0000 != 1 => 4 е четно;
```
</p>
</details>
<br>


# Задача 11
Въвежда за стойности на **символните променливи** `c1`, `c2`, `c3` произволни цифри и намира цялото
число, съставено от тези цифри в последователност `c1`, `c2`, `c3`. 

**Example 1:**
```c++
Input: с1 = '2', с2 = '0', с3 = '5'
Output: 205.
```
# Задача 12
Напишете програма, която преобразува едно число от десетична в двоична бройна система.

**Example 1:**
```c++
Input: 11
Output: 1011
```


**Example 2:**
```c++
Input: 12
Output: 1100
```
<details><summary><b>Hint 1</b></summary>
<p>

![asd](https://www.w3resource.com/w3r_images/cpp-for-loop-image-exercise-70.png)
</p>
</details>
<br>

# Задача 13
Дадени са 5 числа. Всяко число се среща четен брой пъти с изключение на едно.
Да се изведе това число, което се среща нечетен брой пъти.

**Example 1:**
```c++
Input: 1 1 3 5 3
Output: 5
```

<details><summary><b>Hint 1</b></summary>
<p>
Използвайте побитови операции.
</p>
</details>
<br>

# Задача 14
Дадени са ви две цели неотрицателни числа `x` и `n`. Без да използвате операциите
умножение и събиране умножете числото `x` по `2` на степен `n`.

**Example 1:**
```c++
Input: x = 5, n = 2
Output: 20
Explanation: 5 * (2^2) = 5 * 4 = 20
```
<details><summary><b>Hint 1</b></summary>
<p>
Използвайте побитови операции.
</p>
</details>
<br>




# Задача 15
Дадено е положително цяло число. Проверете дали битовете в двоичния му запис се редуват. (дали два съседни бита винаги имат различна стойност)

**Example 1:**
```c++
Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101
```
**Example 2:**
```c++
Input: n = 7
Output: false
Explanation: The binary representation of 7 is: 111.
```
**Example 3:**
```c++
Input: n = 11
Output: false
Explanation: The binary representation of 11 is: 1011.
```
**Example 4:**
```c++
Input: n = 10
Output: true
Explanation: The binary representation of 10 is: 1010.
```
**Example 5:**
```c++
Input: n = 3
Output: false
```
**Constraints:**

- `1 <= n <= 2`<sup>`31`</sup>` - 1`



<details><summary><b>Hint 1</b></summary>
<p>

```

      10101010101
  +    1010101010    ( number >> 1 )
  ---------------
  =   11111111111
  &  100000000000
  ---------------
  =             0    ( power of two )
```
</p>
</details>
<br>
