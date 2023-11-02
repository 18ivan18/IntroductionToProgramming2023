# FAQ

Как се декларира статичен масив?
```c++
int arr[100];
```

Как се въвеждат данни в статичен масив?
```c++
int arr[10];
for(int i = 0; i < 10; i++) {
    std::cin >> arr[i];
}
```
Добра практика: декларираме масив с максимална големина MAX_SIZE и въвеждаме число `n`, което представлява размерността, с която ще работим в задачата. 
```c++
const int MAX_SIZE = 100;
int arr[MAX_SIZE], n;
std::cin >> n;
assert(n > 0 && n <= MAX_SIZE);
// or
do {
    std::cout << "Invalid Input. Try again."
    std::cin >> n;
} while (n > MAX_SIZE || n <= 0)
for(int i = 0; i < n; i++) {
    std::cin >> arr[i];
}
```

Как се инициализира статичен масив?
```c++
// uninitialized, bad practice
int arr[5];
// [1, 2, 3, 4, 5]
int arr[5] = { 1, 2, 3, 4, 5};
// [7, 7, 7, 7, 7]
int arr[5] = { 7 };
// [1, 2, 0, 0, 0]
int arr[5] = {1, 2};
// [1, 2]
int arr[] = {1, 2};
```

Как се намира големината на статичен масив?
```c++
const int MAX_SIZE = 5;
// we use MAX_SIZE as the size here
int arr[MAX_SIZE];

int arr[] = {1, 2, 3};
int size = sizeof(arr) / sizeof(int);
// works but a better practice is:
int size = sizeof(arr) / sizeof(arr[0]);
```

Как се предава масив като аргумент на функция?
```c++
void doWorkOnArray(int* array, int size) {

}

// ...
int arr[] = {1, 2, 3, 4, 5}, n = sizeof(arr) / sizeof(arr[0]);
doWorkOnArray(arr, n);

const int MAX_SIZE = 100;
int arr[MAX_SIZE], n;
std::cin >> n;
assert(n > 0 && n <= MAX_SIZE);
for(int i = 0; i < n; i++) {
    std::cin >> arr[i];
}
doWorkOnArray(arr, n);
``` 


# Задача 1
Напишете функция, която въвежда `n` числа в масиви ги извежда в прав и обратен ред.

**Example 1:**
```c++
Input: n = 6, [1, 7, 3, 6, 9, 0]
Output: 1, 7, 3, 6, 9, 0
        0, 9, 6, 4, 7, 1
```

# Задача 2
Напишете функция, която по подаден масив от числа с големина `n` извежда най-голямото.

**Example 1:**
```c++
Input: n = 6, [1, 7, 3, 6, 9, 0]
Output: 9
```

А ако искаме да намерим най-големите 3? Ами k?

# Задача 3
Да се напише програма, която въвежда естествено число n, по-малко от предварително избран MAX_SIZE, въвежда n на брой елемента в масив и изтрива елемент от масив на позиция k. (индексите започват от 0)

**Example 1:**
```c++
Input: n = 5, [1, 2, 3, 4, 5], k = 2
Output: [1, 2, 4, 5]
```

# Задача 4
Да се напише програма, която въвежда естествено число n, по-малко от предварително избран MAX_SIZE, въвежда n на брой елемента в масив и определя дали редицата от числа е монотонно растяща (намаляваща).

**Example 1:**
```c++
Input: n = 6, [1, 2, 3, 4, 5, 6] 
Output: The sequence is increasing
```


**Example 2:**
```c++
Input: n = 7, [10, 7, 5, 3, 2, 2, 1] 
Output: The sequence is decreasing
```

**Example 3:**
```c++
Input: n = 7, [10, 7, 4, 8, 4, 2, 10] 
Output: The sequence is neither increasing nor decreasing
```

# Задача 5
Да се напише програма, която въвежда естествено число n, по-малко от предварително избран MAX_SIZE, въвежда n на брой елемента в масив и изтрива всяко срещане на елемент k в масив (k се въвежда от клавиатурата).

**Example 1:**
```c++
Input: n = 6, [1, 7, 3, 6, 9, 0], k = 3
Output: [1, 7, 6, 9, 0]
```


**Example 2:**
```c++
Input: n = 7, [1, 2, 3, 4, 3, 4, 3], k = 3
Output: [1, 2, 4, 4]
```


# Задача 6
Да се напише програма, която въвежда естествено число n, по-малко от предварително избран MAX_SIZE, въвежда n на брой елемента в масив и въвежда елемент m на позиция k в масива, a останалите елементи се изместват с една позиция надясно.

**Example 1:**
```c++
Input: n = 7, [1, 2, 3, 4, 3, 4, 3], m = 5, k = 3
Output: [1, 2, 3, 5, 4, 3, 4, 3]
```

# Задача 7
Да се напише програма, която проверява дали един масив е симетричен.

**Example 1:**
```c++
Input: n = 7, [1, 2, 3, 4, 3, 2, 1]
Output: true
```

# Задача 8
Да се напише програма, която намира най-близкия елемент до средното аритметично на всички числа в
масива.

**Example 1:**
```c++
Input: n = 5, [1, 3, 0, 2, 4]
Output: 2
```

# Задача 9
Въведете два масива. Изведете техните:
- сечение:
Пример: 
1 2 3 4 5
2 7 8 5 1 10
Резултат: 1 2 5
- разлика:

- разлика и елементите не се делят на 3 
Пример: 17 9 6 7 13
10 1 7 18 22
Резултат: 17 13

- обединение;

# Задача 10
## Two sum
По даден масив от цели числа и цел - цяло число, изведете индексите на двете числа, чиито сбор е равен на целта.

Не можете да използвате един и същи елемент два пъти.

Приемаме, че винаги има точно едно решение.

**Example 1:**
```c++
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**
```c++
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3:**
```c++
Input: nums = [3,3], target = 6
Output: [0,1]
 ```

**Constraints:**

- 2 <= nums.length <= 10<sup>4</sup>
- -10<sup>9</sup> <= nums[i] <= 10<sup>9</sup>
- -10<sup>9</sup> <= target <= 10<sup>9</sup>
- Only one valid answer exists.

# Задача 11
По даден масив принтирайте множеството от елементи, което той образува.

**Example 1:**
```c++
Input: arr = [1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6]
Output: 1 5 7 8 9 11 2 6 
```

# Задача 12
## a) По даден масив и число k, намерете броя на срещанията на k в масива.

**Example 1:**
```c++
Input: arr = [5, 7, 8, 8, 5, 8, 7, 7], k = 7
Output: 3
```
<!-- # Задача 12
По даден масив върнете true, ако броят на срещанията на всеки елемент е уникален и false иначе.

**Example 1:**
```c++
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
```
**Example 2:**
```c++
Input: arr = [1,2]
Output: false
```
**Example 3:**
```c++
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 ```

**Constraints:**

- 1 <= arr.length <= 1000
- -1000 <= arr[i] <= 1000 -->


# Задача 13
По даден масив, за който знаем, че всеки негов елемент се среща четен брой пъти, освен 1, който се среща нечетен брой пъти. Намерете елемента, който се среща нечетен брой пъти.

**Example 1:**
```c++
Input: arr = [1, 2, 2, 1, 3, 1, 3]
Output: 1
```
**Example 2:**
```c++
Input: arr = [1, 2, 1]
Output: 2
```
**Example 3:**
```c++
Input: arr = [5, 6, 7, 5, 6, 6, 7, 5, 6]
Output: 5
 ```

# Задача 14
Нашият герой Тиймо атакува противниковата Аш с отровни атаки. Когато Тиймо атакува Аш, Аш получава poison статус за точно `duration` секунди. По формално, ако Тиймо атакува Аш в секундата `t`, това означава, че Аш ще има poison статус във времевия интервал `[t, t + duration - 1]`. Ако Тиймо атакува отново преди предишния poison статус да е свършил, таймерът се рестартира, което означава, че poison статус-а ще приключи `duration` секунди след конкретната атака.

Даден ви е ненамаляващ масив от цели числа `timeSeries`, където timeSeries[i] e момента, в който Тиймо атакува Аш, както и цяло число `duration`.

Изведете колко секунда Аш е била poison-ната.

**Example 1:**
```
Input: timeSeries = [1,4], duration = 2
Output: 4
Explanation: Teemo's attacks on Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 4, Teemo attacks, and Ashe is poisoned for seconds 4 and 5.
Ashe is poisoned for seconds 1, 2, 4, and 5, which is 4 seconds in total.
```
**Example 2:**
```
Input: timeSeries = [1,2], duration = 2
Output: 3
Explanation: Teemo's attacks on Ashe go as follows:
- At second 1, Teemo attacks, and Ashe is poisoned for seconds 1 and 2.
- At second 2 however, Teemo attacks again and resets the poison timer. Ashe is poisoned for seconds 2 and 3.
Ashe is poisoned for seconds 1, 2, and 3, which is 3 seconds in total.
 ```

**Constraints:**

- 1 <= timeSeries.length <= 10<sup>4</sup>
- 0 <= timeSeries[i], duration <= 10<sup>7</sup>
- timeSeries is sorted in non-decreasing order.
