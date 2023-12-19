# FAQ
## Какво е backtracking? 
Backtracking наричаме похват/техника при писането на алгоритми (най-често задачи за удовлетворяване на условие), който разглежда всяка възможна комбинация в процеса на решаване на изчислителна задача. В процеса на алгоритъма отговорът се изчислява и натрупва инкрементално. Даден кандидат спира да се разглежда в момента, в който установим, че не удовлетворява условието.

## Примери:
Най-простите примери за такъв тип задача са търсене на път в лабиринт. Нека разгледаме следната задача:

Имаме даден лабиринт (матрица с големина n x m). Имаме и робот, който първоначално се намира на стартови координати x и y. Той се опитва да стигне до крайни координати endX и endY. Той може да се движи в четирите основни посоки (нагоре, надолу, наляво, надясно).
Лабиринтът се представя като матрица от символите `.` и `-`, като точката е проходима клетка, а тирето е непроходима клетка. Роботът не може да минава през непроходими клетки. 
Има няколко основни вариации на тази задача. Ще се опитаме да отговорим на няколко основни въпроса:
- Има ли път от началното състояние до крайното?
- Кой е пътят?
- Колко са всички уникални пътища от началното състояние до крайното? Кои са те?
![](https://assets.leetcode.com/uploads/2020/11/04/robot1.jpg)

```
Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right
```


# Задача 1
По даден символен низ, съдържащ цифрите от 2 до 9 включително постройте всички комбинации от букви, които можем да напишем от телефон с копчета.

Съпоставянето на цифра с буква е показано отдолу.

![](https://upload.wikimedia.org/wikipedia/commons/thumb/7/73/Telephone-keypad2.svg/200px-Telephone-keypad2.svg.png)

**Example 1:**
```c++
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
```
**Example 2:**

```c++
Input: digits = ""
Output: []
```
**Example 3:**
```c++
Input: digits = "2"
Output: ["a","b","c"]
 ```

**Constraints:**

- 0 <= digits.length <= 4
- digits[i] is a digit in the range ['2', '9'].

# Задача 2
По дадени `n` двойки от отваряща и затваряща скоба напишете функция, която генерира всички комбинации от правилни скоби.


 

**Example 1:**
```c++
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
```
**Example 2:**

```c++
Input: n = 1
Output: ["()"]
 ```

**Constraints:**

- 1 <= n <= 8

# Задача 3
По даден масив от различни цели числа върнете всички възможни пермутации.


**Example 1:**
```c++
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
```
**Example 2:**
```c++
Input: nums = [0,1]
Output: [[0,1],[1,0]]
```
**Example 3:**
```c++
Input: nums = [1]
Output: [[1]]
 ```

**Constraints:**

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

# Задача 4
Given an m x n grid of characters board and a string word, return true if word exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

 

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/11/04/word2.jpg)

```c++
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true
```
**Example 2:**



![](https://assets.leetcode.com/uploads/2020/11/04/word-1.jpg)
```c++
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
Output: true
```
**Example 3:**


![](https://assets.leetcode.com/uploads/2020/10/15/word3.jpg)
```c++
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"
Output: false
 ```

**Constraints:**

- m == board.length
- n = board[i].length
- 1 <= m, n <= 6
- 1 <= word.length <= 15
- board and word consists of only lowercase and uppercase English letters.
 
# Задача 5

You are given an `m` x `n` integer array grid where grid[i][j] could be:

- 1 representing the starting square. There is exactly one starting square.
- 2 representing the ending square. There is exactly one ending square.
- 0 representing empty squares we can walk over.
- -1 representing obstacles that we cannot walk over.


Return the number of 4-directional walks from the starting square to the ending square, that walk over every non-obstacle square exactly `once`.

![](https://assets.leetcode.com/uploads/2021/08/02/lc-unique1.jpg)
```
Input: grid = [[1,0,0,0],[0,0,0,0],[0,0,2,-1]]
Output: 2
Explanation: We have the following two paths: 
1. (0,0),(0,1),(0,2),(0,3),(1,3),(1,2),(1,1),(1,0),(2,0),(2,1),(2,2)
2. (0,0),(1,0),(2,0),(2,1),(1,1),(0,1),(0,2),(0,3),(1,3),(1,2),(2,2)
```

![](https://assets.leetcode.com/uploads/2021/08/02/lc-unique2.jpg)
```
Input: grid = [[1,0,0,0],[0,0,0,0],[0,0,0,2]]
Output: 4
Explanation: We have the following four paths: 
1. (0,0),(0,1),(0,2),(0,3),(1,3),(1,2),(1,1),(1,0),(2,0),(2,1),(2,2),(2,3)
2. (0,0),(0,1),(1,1),(1,0),(2,0),(2,1),(2,2),(1,2),(0,2),(0,3),(1,3),(2,3)
3. (0,0),(1,0),(2,0),(2,1),(2,2),(1,2),(1,1),(0,1),(0,2),(0,3),(1,3),(2,3)
4. (0,0),(1,0),(2,0),(2,1),(1,1),(0,1),(0,2),(0,3),(1,3),(1,2),(2,2),(2,3)
```