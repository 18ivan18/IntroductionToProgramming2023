# Задача 1
По дадено положително естествено число `n` изведете всички числа от `1` до `n` на екрана.
Намерете техния сбор и произведение.

**Example 1:**
```c++
Input: n = 7
Output: 1 2 3 4 5 6 7
        sum = 28
        product = 5040
Explanation: 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
             1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040
```
<details><summary><b>Hint 1</b></summary>
<p>

A знаете ли формула за пресмятане на сбор/произведение? Използвайте я, за да проверите отговора си. 
</p>
</details>
<br>

# Задача 2
По дадени числа `n` и `m` изведете всички числа в интервал `[min, max]` на четни позиции, където `min` е по-малкото от двете числа, а `max` е по-голямото.
Намерете техния сбор и произведение.

**Example 1:**
```c++
Input: n = 7, m = 13
Output: 8 10 12
        sum = 30
        product = 5040
Explanation: 8 + 10 + 12 = 30
             8 * 10 * 12 = 960
```

**Example 2:**
```c++
Input: n = 10, m = -1
Output: 0 2 4 6 8 10
        sum = 30
        product = 0
```

# Задача 3
По дадено число `n` намерете `n!` (факториел).

**Example 1:**
```c++  
Input: n = 7
Output: 5040
Explanation: 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040
```

**Example 2:**
```c++
Input: n = -5
Output: Invalid input
```

**Example 3:**
```c++
Input: n = 0
Output: 1
```


# Задача 4
По дадени числа `n` и `m` намерете <img src="https://render.githubusercontent.com/render/math?math=n^m">.

**Example 1:**
```c++  
Input: n = 7, m = 2
Output: 49
```

**Example 2:**
```c++
Input: n = 2, m = -2
Output: 0.25
```

**Example 3:**
```c++
Input: n = 10, m = 0
Output: 1
```

# Задача 5
По дадено число `n` намерете стойността на следната редица.

<img style="transform: translateY(0.1em); background: white;" src="https://render.githubusercontent.com/render/math?math=1%20%2B%20%5Cfrac%7B1%7D%7B2%5E2%7D%20%2B%20%5Cfrac%7B1%7D%7B3%5E3%7D%20%2B%20...%20%2B%20%5Cfrac%7B1%7D%7Bn%5En%7D">	


**Example 1:**
```c++  
Input: n = 5
Output: 1.29126
```

# Задача 6
По дадени числа `x` и `n` намерете стойността на следната редица.

<img style="transform: translateY(0.1em); background: white;" src="https://render.githubusercontent.com/render/math?math=1%20-%20%5Cfrac%7Bx%5E2%7D%7B2!%7D%20%2B%20%5Cfrac%7Bx%5E4%7D%7B4!%7D%20%2B%20...%20%2B%20(-1)%20%5E%20n%20%5Cfrac%7Bx%5E%7B2n%7D%7D%7B(2n)!%7D">	


**Example 1:**
```c++  
Input: x = 3, n = 4
Output: -1.1375
Explanation: 
term 1 value is: 1                                                    
term 2 value is: -4.5                                                 
term 3 value is: 3.375                                                
term 4 value is: -1.0125                                              
The sum of the above series is: -1.1375
```

# Задача 7
По дадено число `n` проверете дали `n` e просто число.

**Example 1:**
```c++
Input: n = 7
Output: true
```

**Example 2:**
```c++
Input: n = 10
Output: false
```

<details><summary><b>Hint 1</b></summary>
<p>

![](https://www.w3resource.com/w3r_images/cpp-for-loop-image-exercise-5.png)
</p>
</details>
<br>

# Задача 8
По дадено число `n` намерете всички различни делители на `n`.

**Example 1:**
```c++  
Input: n = 28
Output: 1, 2, 4, 7, 14, 28
```

# Задача 9
Разложете `n` на прости множители.

**Example 1:**
```c++  
Input: n = 476
Output: 2, 2, 7, 17
```
# Задача 10
По дадено число `n` намерете сбора на цифрите в записа му.

**Example 1:**
```c++
Input: n = 542
Output: 11
```

**Example 2:**
```c++
Input: n = -971
Output: 17
```


# Задача 11
По дадено число `n` намерете обратното му число, т.е. такова число `m` записано с цифрите на `n` отзад напред.

**Example 1:**
```c++
Input: n = 1234
Output: 4321
```

**Example 2:**
```c++
Input: n = 7
Output: 7
```

# Задача 12

Дадено е цяло число `x`, изведете `true` ако `x` е палиндром.

Цяло число е **палиндром** ако се чете по един и същи начин отпред назад и отзад напред. Например `121` е палиндром, докато `123` не е.


**Example 1:**
```c++
Input: x = 121
Output: true
```
**Example 2:**
```c++
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```
**Example 3:**
```c++
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```
**Example 4:**
```c++
Input: x = -101
Output: false
```

**Constraints:**

- -2<sup>31</sup> <= x <= 2<sup>31</sup> - 1

# Задача 13
Намерете най-голям общ делител на числата `n` и `m`.

**Example 1:**
```c++
Input: n = 25, m = 15
Output: 5
```

<details><summary><b>Hint 1</b></summary>
<p>

![](https://www.w3resource.com/w3r_images/cpp-for-loop-image-exercise-9.png)
</p>
</details>
<br>

# Задача 14
По дадено число `n` определете дали то е сбор от две прости числа. Ако да, изведете ги.

**Example 1:**
```c++  
Input: n = 20
Output: 20 = 3 + 17
        20 = 13 + 7
```

**Example 1:**
```c++  
Input: n = 21
Output: false
```

<details><summary><b>Hint 1</b></summary>
<p>

Тук най-лесно е използването на функции.
</p>
</details>
<br>

# Задача 15
По дадени числа `n` и `m` изведете всички нарцистични числа в инервал `[min, max]`.

 Число n се нарича нарцистично, ако изпълнява следното условие:  <img style="transform: translateY(0.1em); background: white;" src="https://render.githubusercontent.com/render/math?math=n%20%3D%20a_k%5Ek%20%2B%20a_%7Bk%20-%201%7D%5Ek%20%2B%20...%20%2B%20a_2%5Ek%20%2B%20a_1%5Ek">	
, тоест сумата от цифрите на числото, повдигнати на степен броя на цифрите, да е самото число.
 


**Example 1:**
```c++  
Input: n = 100, m = 1000
Output: 153 
        370
        371
        407
Explanation: 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
```

# Задача 16
По дадени числа `n` и `m` изведете всички перфектни числа в инервал `[min, max]`.

Перфектно е числo e такова число, чиито сбор от разлините делители е самото число.

<details><summary><b>Hint 1</b></summary>
<p>

![](https://www.w3resource.com/w3r_images/cpp-for-loop-image-exercise-4.png)
</p>
</details>
<br>

**Example 1:**
```c++  
Input: n = 1, m = 500
Output: 6, 28, 496
```


# Задача 17
Колко често се среща всяка цифра в `n`.

**Example 1:**
```c++  
Input: n = 122345
Output: 0: 0, 
        1: 1,
        2: 2,
        3: 1,
        4: 1,
        5: 1,
        6: 0,
        7: 0,
        8: 0,
        9: 0
```
<details><summary><b>Hint 1</b></summary>
<p>

![](https://www.w3resource.com/w3r_images/cpp-for-loop-image-exercise-59.png)
</p>
</details>
<br>

# Задача 18
Намерете броя на битовете `1` в двоичния запис на числото `n`.

**Example 1:**
```c++
Input: n = 5
Output: 2
Exmplanation: 5 decimal = 101 binary
```

# Задача 19
Напишете програма, която преобразува:

- decimal number to binary number
- decimal number to hexadecimal number
- decimal number to octal number
- binary number to decimal number
- binary number to hexadecimal number
- binary number to octal number
- hexadecimal number to decimal number
- hexadecimal number to binary number
- hexadecimal number to octal number
- octal number to decimal number
- octal number to hexadecimal number
- octal number to binary number

**Example:**
```
Input a decimal number: 43
The hexadecimal number is : 2B

Input a decimal number: 15
The octal number is: 17

Input a binary number: 1011
The decimal number: 11

Input a binary number: 1011
The hexadecimal value: B

Input a binary number: 1011
The equivalent octal value of 1011 is : 13

Input any octal number: 17
The equivalent decimal number: 15

Input any octal number: 17
The equivalent binary number: 1111

Input any octal number: 77
The hexadecimal value of 77 is: 3F

Input any 32-bit Hexadecimal Number: 25
The value in decimal number is: 37

Input any 32-bit Hexadecimal Number: 5f
The equivalant binary number is: 1011111
```

## Задачки за рисуване
#### По дадено число `n` изведете следните форми: 
```
*
**
***
****
*****
```
```
1
12
123
1234
12345
```

```
       1                                                               
      2 3                                                              
     4 5 6                                                             
    7 8 9 10 
```

```
        *                                                              
       * *                                                             
      * * *                                                            
     * * * *                                                           
    * * * * *
```

```
    *                                                                  
   ***                                                                 
  *****                                                                
 *******                                                               
*********                                                              
 *******                                                               
  *****                                                                
   ***                                                                 
    * 
```
#### Триъгълника на Паскал
```
1                                                                      
1   1                                                                  
1   2   1                                                              
1   3   3   1                                                          
1   4   6   4   1                                                      
1   5   10   10   5   1                                                
1   6   15   20   15   6   1
```

## Задача за бонус точки 
Да се напише програма, която по въведено естествено число n да извежда ранголи от букви с размер n. (Ранголите са форми от индийското фолклорно изкуство).

Примери:
```
#size 3

----c----
--c-b-c--
c-b-a-b-c
--c-b-c--
----c----
```
#size 5
```
--------e--------
------e-d-e------
----e-d-c-d-e----
--e-d-c-b-c-d-e--
e-d-c-b-a-b-c-d-e
--e-d-c-b-c-d-e--
----e-d-c-d-e----
------e-d-e------
--------e--------
```

#size 10
```
------------------j------------------
----------------j-i-j----------------
--------------j-i-h-i-j--------------
------------j-i-h-g-h-i-j------------
----------j-i-h-g-f-g-h-i-j----------
--------j-i-h-g-f-e-f-g-h-i-j--------
------j-i-h-g-f-e-d-e-f-g-h-i-j------
----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
--j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
j-i-h-g-f-e-d-c-b-a-b-c-d-e-f-g-h-i-j
--j-i-h-g-f-e-d-c-b-c-d-e-f-g-h-i-j--
----j-i-h-g-f-e-d-c-d-e-f-g-h-i-j----
------j-i-h-g-f-e-d-e-f-g-h-i-j------
--------j-i-h-g-f-e-f-g-h-i-j--------
----------j-i-h-g-f-g-h-i-j----------
------------j-i-h-g-h-i-j------------
--------------j-i-h-i-j--------------
----------------j-i-j----------------
------------------j------------------
```
В центъра на ранголите винаги стой буквата «a» и по границата се намира n-тата буква от азбуката.

Ограничения за n:

0 < n < 27