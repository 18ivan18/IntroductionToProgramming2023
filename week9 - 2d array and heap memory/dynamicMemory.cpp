#include <iostream>

int array3[10];
int *pointer;

void setTile(int *arr, int i, int j, int size, int val)
{
  arr[i * size + j] = val;
}

int getTile(int *arr, int i, int j, int size)
{
  return arr[i * size + j];
}

int main()
{
  //--------------------------------------------------STATIC MEMORY------------------------------------------------------------------------------------------
  int number = 5;
  // A magic number is a numeric literal (for example, 1024, 8080) that is used in the middle of a block of code without explanation.
  // It is considered good practice to avoid magic numbers by assigning the numbers to named constants and using the named constants instead
  const int CONST_SIZE_FOR_TODAY = 5;
  int array[] = {1, 2, 3, 4};
  int array1[]{1, 2, 3, 4};         //equivelent notation
  int array2[CONST_SIZE_FOR_TODAY]; //declare the array, the values are not initialised

  std::cout << "Size of 'array' is " << sizeof(array) << '\n';

  for (size_t i = 0; i < sizeof(array) / sizeof(int); i++)
  { //remember sizeof(array)/sizeof(int) works
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;

  // size_t is an unsigned integral data type which is defined in various header files such as:
  //  <stddef.h>, <stdio.h>, <stdlib.h>, <string.h>, < time .h>, <wchar.h> chevron_right.
  //  It's a type which is used to represent the size of objects in bytes and is therefore used as the return type by the sizeof operator.
  for (size_t i = 0; i < sizeof(array1) / sizeof(int); i++)
  {
    std::cout << array1[i] << " ";
  }
  std::cout << std::endl;

  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  {
    std::cout << array2[i] << " "; //random leftovers in memory
  }
  std::cout << std::endl;

  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  {
    std::cout << array3[i] << " "; //global variables have null value when declared
  }
  std::cout << std::endl;

  char string[] = "Georgi rlz"; //some more magic constants
  // we can't do char string[] "Georgi rlz"; but we can
  char string1[]{'V', 'a', 'n', 'k', 'a', 't', 'a', ' ', 's', 'u', 'c', 'k', 's', '\0'};

  std::cout << string;
  std::cout << std::endl;

  std::cout << string1;
  std::cout << std::endl;

  int matrix[CONST_SIZE_FOR_TODAY][CONST_SIZE_FOR_TODAY] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  {
    for (size_t j = 0; j < CONST_SIZE_FOR_TODAY; j++)
    {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  if (pointer == nullptr)
  {
    std::cout << "Null value of pointers is 'nullptr'\n"; //nullptr is the same as NULL (from c), but nullptr is preferred since C++11 (not compatible with C)
    // pointer is global variable of type int*
  }
  //--------------------------------------------------DYNAMIC MEMORY------------------------------------------------------------------------------------------
  int *dynamicNumber = new int; //single variable declaration

  *dynamicNumber = CONST_SIZE_FOR_TODAY; //variable initialisation

  int *dynamicArray = new int[CONST_SIZE_FOR_TODAY]; //array declaration

  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  {
    dynamicArray[i] = CONST_SIZE_FOR_TODAY * i; //array initialisation
  }

  std::cout << "Size of 'dynamicArray' is " << sizeof(dynamicArray) << std::endl;
  std::cout << "Size of int* is " << sizeof(int *) << std::endl;

  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  { // sizeof(dynamicArray)/sizeof(int) doesn't work, because dynamicArray is int* which has const size
    std::cout << dynamicArray[i] << " ";
  }
  std::cout << std::endl;

  int **dynamicMatrix = new int *[CONST_SIZE_FOR_TODAY]; //matrix declaration
  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  {
    dynamicMatrix[i] = new int[CONST_SIZE_FOR_TODAY];
  }

  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  {
    for (size_t j = 0; j < CONST_SIZE_FOR_TODAY; j++)
    {
      //dynamicMatrix[i][j] = i + j; //matrix initialisation
      //same as
      *(*(dynamicMatrix + i) + j) = i + j;
    }
  }

  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  {
    for (size_t j = 0; j < CONST_SIZE_FOR_TODAY; j++)
    {
      std::cout << dynamicMatrix[i][j] << " ";
      //std::cout << *(*(dynamicMatrix + i) + j) << " "; //same
    }
    std::cout << std::endl;
  }

  int *foo = new int[CONST_SIZE_FOR_TODAY]; // if allocation fails, bad_alloc exception is thrown
  int *bar;
  // when we use std::nothrow and memory allocation fails, instead of throwing a bad_alloc exception or terminating the program,
  // the pointer returned by new is a null pointer, and the program continues its execution normally.
  bar = new (std::nothrow) int[CONST_SIZE_FOR_TODAY];
  if (bar == nullptr)
  {
    // error assigning memory. Take measures.
  }

  // simple trick to make a 2d array as 1d, making a 4x5 matrix in this example
  int n = 4, m = 5, index;
  int *arr = new int[n * m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      // set each tile as i + j
      setTile(arr, i, j, m, i + j);
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      std::cout << getTile(arr, i, j, m) << " ";
    }
    std::cout << std::endl;
  }
  delete[] arr;

  delete dynamicNumber;
  delete[] dynamicArray;
  for (size_t i = 0; i < CONST_SIZE_FOR_TODAY; i++)
  {
    delete[] dynamicMatrix[i];
  }
  delete[] dynamicMatrix;
  delete[] foo;
  delete[] bar; //delete works fine on nullptr
}
