# FAQ

## Как работя с двумерни масиви?
Както и с едномерни, разбира се.

```c++
const int SIZE = 10;

// подаване като аргумент на функция 
void print(int matrix[][SIZE], int n, int m)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            // std::cout << matrix[i][j] << " ";
            std::cout << *(*(matrix + i) + j) << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    // validate n and m
    int matrix[SIZE][SIZE];
    // въвеждане
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    // извеждане
    print(matrix, n, m);
}
```

## Какво е динамично заделяне на памет?

Заделяме памет на heap-a, вместо на stack-a.


## Защо го ползваме?

Паметтна на heap-a я освобождаваме, когато приключим работата с нея, т.е. зависи изцяло от нас. Тази на stack-a се освобождава, когато се разруши съответната стекова рамка.


## Как го ползваме?

Добре че попита. Оператори new и delete. New ни дава адреса до поисканата памет. 
Delete освобождава паметта.

```c++
int* num = new int; // заделяне върху heap
// ...
delete num; // освобождаване

{
    int num; // заделяне върху stack
    // освобождаване
}
```

Подобно е и с масивите.
```c++
int n;
std::cin >> n;
int *arr = new int[n]; // заделяме памет от heap за n на брой int, можем да използваме променливата n
// ...
delete[] arr; // освобождаваме с [] защото е масив

const int MAX_SIZE = 100;
int arr[MAX_SIZE]; // не можем да използваме n, защото не е константа
```

## А за матрици?
```c++
int n, m;
int **matrix = new int*[n]; // заделяме памет за n на брой int* - n реда
for(int i = 0; i < n; i++) {
    matrix[i] = new int[m]; //  заделяме памет за m на брой int - всеки ред има по m колони
}

for(int i = 0; i < n; i++) {
    delete[] matrix[i]
}
delete[] matrix;
```

## Трийте си паметта! Иначе лошо

```c++
//--------------------------------------------------MEMORY LEAK------------------------------------------------------------------------------------------
//A memory leak occurs in C++ when you allocate memory dynamically and never give it back

void leak() {
//allocate 8 bytes from heap
double *pointer = new double;
}

int main() {
  leak(); // After running, those bytes were not released, but dynamic memory is released after the program is finished, right? Imgine this

  // run this at your own risk
  for(int i = 0; i < 150000; i++) { 
    leak();
  }
}

```


# Задачи

## Задача 1
Дадена ви е матрица от цели числа с размери n * n (n <= 100). Да се изведат едни след друг елементите: 
- под главния диагонал, включително елементите по него 
- над главния диагонал, без елементите по него 
- под второстепенния диагонал, без елементите по него 
- над второстепенния диагонал, включително елементите по него 
    
**Example 1:**

```c++
Input: 3  
       1 2 3 
       4 5 6 
       7 8 9 
```

## Задача 2
Дадена ви е матрица от цели числа с размери n * n (n <= 100). Намерете сумата на елементите под главния диагонал
    
**Example 1:**

```c++
Input:  4 
        7      3      6      1 
        9.1    8      5      2 
        1.2    2.3    3      3 
        7.4    8.5    9.6    1
Output: 38.1
```

## Задача 3
 Да се напише функция, която приема като аргумент квадратна 
матрица nxn (3 <= n <= 32) и да връща произведението на всички 
елементи, в чийто запис се съдържа цифрата 1 и са под вторичния 
диагонал(без него).
## Задача 4
Да се напише функция, която приема като аргумент квадратна 
матрица nxn (3 <= n <= 32) и извежда на екрана редът и колоната, чийто
сбор от елементи е най-голям.
## Задача 5
 Да се напише функция, която приема като аргумент число "k" и 
матрица nxm (1 < n <= 16, 1 < m <= 32) и да изтрива от нея k-тия ред.
## Задача 6
 Да се напише функция, която приема като аргумент число "k" и 
матрица nxm (1 < n <= 16, 1 < m <= 32) и да се изтрива от нея k-тия 
стълб.

## Задача 7
Дадени са две матрици A и B с размер NxN. Да се изведе матрицата, 
получена при умножението на двете матрици. Задачата да се реши с 
указателна аритметика.
Обяснение: Матрици се умножават на принципа “ред по колона”. Т.е. ако
получената матрица наричаме C, то C[i][j]=ΣA[i][k]*B[k][j], 0<=k<N.


**Example 1:**

```c++
Input:  4
         1 2 3 4
         4 3 2 1
         3 1 1 2
         2 4 4 3

         1 0 0 0 
        -1 2 0 3
         0 1 1 2
         0 0 4 5

Output: -1   7 19 32 
         1   8   6 18 
         2   3   9 15 
        -2 12 16 35
```
**Constraints:**

- 0 < N < 1024


## Задача 8
По дадена матрица с размерност `m x n` върнете елементите ѝ в спираловиден ред.


**Example 1:**

![](https://assets.leetcode.com/uploads/2020/11/13/spiral1.jpg)
```c++
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
```

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/11/13/spiral.jpg)
```c++
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 ```

**Constraints:**

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 10
- -100 <= matrix[i][j] <= 100


## Задача 9
Дадена е квадратна матрица `n x n`. Завъртете матрицата на 90 градуса по часовниковата стрелка.

**Example 1:**
![](https://assets.leetcode.com/uploads/2020/08/28/mat1.jpg)
```c++
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
```

**Example 2:**
![](https://assets.leetcode.com/uploads/2020/08/28/mat2.jpg)

```c++
Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
 ```

**Constraints:**

- n == matrix.length == matrix[i].length
- 1 <= n <= 20
- -1000 <= matrix[i][j] <= 1000


## Задача 10

An image smoother is a filter of the size 3 x 3 that can be applied to each cell of an image by rounding down the average of the cell and the eight surrounding cells (i.e., the average of the nine cells in the blue smoother). If one or more of the surrounding cells of a cell is not present, we do not consider it in the average (i.e., the average of the four cells in the red smoother).


![](https://assets.leetcode.com/uploads/2021/05/03/smoother-grid.jpg)
Given an m x n integer matrix img representing the grayscale of an image, return the image after applying the smoother on each cell of it.

 

**Example 1:**

![](https://assets.leetcode.com/uploads/2021/05/03/smooth-grid.jpg)
```c++
Input: img = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[0,0,0],[0,0,0],[0,0,0]]
Explanation:
For the points (0,0), (0,2), (2,0), (2,2): floor(3/4) = floor(0.75) = 0
For the points (0,1), (1,0), (1,2), (2,1): floor(5/6) = floor(0.83333333) = 0
For the point (1,1): floor(8/9) = floor(0.88888889) = 0
```
**Example 2:**

![](https://assets.leetcode.com/uploads/2021/05/03/smooth2-grid.jpg)
```c++
Input: img = [[100,200,100],[200,50,200],[100,200,100]]
Output: [[137,141,137],[141,138,141],[137,141,137]]
Explanation:
For the points (0,0), (0,2), (2,0), (2,2): floor((100+200+200+50)/4) = floor(137.5) = 137
For the points (0,1), (1,0), (1,2), (2,1): floor((200+200+50+200+100+100)/6) = floor(141.666667) = 141
For the point (1,1): floor((50+200+200+200+200+100+100+100+100)/9) = floor(138.888889) = 138
 ```

**Constraints:**

- m == img.length
- n == img[i].length
- 1 <= m, n <= 200
- 0 <= img[i][j] <= 255


## Задача 11
Определете дали `9 x 9` Судоку е валидно.

Да се валидират само попълнените квадратчета по следните правила:

- Всеки ред трябва да съдържа цифрите 1-9 без повторение.
- Всяка колона трябва да съдържа цифрите 1-9 без повторение.
- Всяко от 3x3 подквадратчетата в черно трябва да съдържат цифрите 1-9 без повторения.
 

**Example 1:**

![](https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Sudoku-by-L2G-20050714.svg/250px-Sudoku-by-L2G-20050714.svg.png)
```
Input: board = 
[["5","3",".",".","7",".",".",".","."],
 [".","9","8",".",".",".",".","6","."],
 ["6",".",".","1","9","5",".",".","."],
 ["8",".",".",".","6",".",".",".","3"],
 ["4",".",".","8",".","3",".",".","1"],
 ["7",".",".",".","2",".",".",".","6"],
 [".","6",".",".",".",".","2","8","."],
 [".",".",".","4","1","9",".",".","5"],
 [".",".",".",".","8",".",".","7","9"]]
Output: true
```
**Example 2:**
```
Input: board = 
[["8","3",".",".","7",".",".",".","."],
 ["6",".",".","1","9","5",".",".","."],
 [".","9","8",".",".",".",".","6","."],
 ["8",".",".",".","6",".",".",".","3"],
 ["4",".",".","8",".","3",".",".","1"],
 ["7",".",".",".","2",".",".",".","6"],
 [".","6",".",".",".",".","2","8","."],
 [".",".",".","4","1","9",".",".","5"],
 [".",".",".",".","8",".",".","7","9"]]
Output: false
Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
 ```

**Constraints:**

- board.length == 9
- board[i].length == 9
- board[i][j] is a digit 1-9 or '.'.

## Задача 12
Напишете програма, която решава Судоку пъзел попълвайки празните клетки.

**Example 1:**

![](https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Sudoku-by-L2G-20050714.svg/250px-Sudoku-by-L2G-20050714.svg.png)

```
Input: board = [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
Output: [["5","3","4","6","7","8","9","1","2"],["6","7","2","1","9","5","3","4","8"],["1","9","8","3","4","2","5","6","7"],["8","5","9","7","6","1","4","2","3"],["4","2","6","8","5","3","7","9","1"],["7","1","3","9","2","4","8","5","6"],["9","6","1","5","3","7","2","8","4"],["2","8","7","4","1","9","6","3","5"],["3","4","5","2","8","6","1","7","9"]]
Explanation: The input board is shown above and the only valid solution is shown below:
```
![](https://upload.wikimedia.org/wikipedia/commons/thumb/3/31/Sudoku-by-L2G-20050714_solution.svg/250px-Sudoku-by-L2G-20050714_solution.svg.png)
 

**Constraints:**

- board.length == 9
- board[i].length == 9
- board[i][j] is a digit or '.'.
- It is guaranteed that the input board has only one solution.