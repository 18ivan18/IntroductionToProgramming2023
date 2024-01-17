#include "timeComplexity.cpp"

int main()
{
    std::cout << "Hello Gosho" << std::endl;
    // O(1) - Constant time
    // Primitive operations like sum, multiplication, subtraction, division, modulo, bit shift, etc., have a constant runtime.
    isEvenOrOdd(10);    // => Even
    isEvenOrOdd(10001); // => Odd
    // --------------------------------------------------------------------------------------------------------------
    char sentence[] = "This a very cool sentance.";
    int *dictionary = buildDictionary(sentence); // Complexity? => O(n)
    getLetterFrequency(dictionary, 'o');         // Complexity => O(1)
    delete[] dictionary;

    // --------------------------------------------------------------------------------------------------------------
    // O(n) - Linear time
    // Linear time complexity O(n) means that the algorithms take proportionally longer to complete as the input grows.
    int array[] = {3, 1, 2};
    int size = sizeof(array) / sizeof(array[0]);
    findMax(array, size);

    int array1[] = {4, 5, 6, 1, 9, 2, 8, 3, 7};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    findMax(array1, size1);

    // --------------------------------------------------------------------------------------------------------------
    // O(n^2) - Quadratic time
    // A function with a quadratic time complexity has a growth rate of n2. If the input is size 2, it will do four operations. If the input is size 8, it will take 64, and so on.
    int array2[] = {1, 2, 3, 4};
    int size2 = sizeof(array2) / sizeof(array2[0]);
    hasDuplicates(array2, size2); // n: 4, counter: 16

    int array3[] = {4, 5, 6, 1, 9, 2, 8, 3, 7};
    int size3 = sizeof(array3) / sizeof(array3[0]);
    hasDuplicates(array3, size3); // n: 9, counter: 81

    bubbleSort(array1, size1);
    for (size_t i = 0; i < size1; i++)
    {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    // --------------------------------------------------------------------------------------------------------------
    // O(n^c) - Polynomial time
    findXYZ(10);

    // --------------------------------------------------------------------------------------------------------------
    // O(log n) - Logarithmic time
    /*
    Logarithmic time complexities usually apply to algorithms that divide problems in half every time. For instance, let’s say that we want to look for a book in a dictionary. As you know, this book has every word sorted alphabetically. If you are looking for a word, then there are at least two ways to do it:

    Algorithm A:

    Start on the first page of the book and go word by word until you find what you are looking for.
    Algorithm B:

    Open the book in the middle and check the first word on it.
    If the word you are looking for is alphabetically more significant, then look to the right. Otherwise, look in the left half.
    Divide the remainder in half again, and repeat step #2 until you find the word you are looking for.
    Which one is faster? The first algorithms go word by word O(n), while the algorithm B split the problem in half on each iteration O(log n). This 2nd algorithm is a binary search.
    */

    // Usage example with a list of names in ascending order:
    char *directory[] = {"Adrian", "Bella", "Charlotte", "Daniel", "Emma", "Hanna", "Isabella", "Jayden", "Kaylee", "Luke", "Mia", "Nora", "Olivia", "Paisley", "Riley", "Thomas", "Wyatt", "Xander", "Zoe"};
    std::cout << binarySearch(directory, 0, 18, "Hanna") << std::endl;  // => 5
    std::cout << binarySearch(directory, 0, 18, "Adrian") << std::endl; // => 0
    std::cout << binarySearch(directory, 0, 18, "Zoe") << std::endl;    // => 18

    // --------------------------------------------------------------------------------------------------------------
    // O(n log n) - Linearithmic
    mergeSort(array3, 0, size3 - 1);
    for (size_t i = 0; i < size3; i++)
    {
        std::cout << array3[i] << " ";
    }
    std::cout << std::endl;

    // --------------------------------------------------------------------------------------------------------------
    // O(2^n) - Exponential time
    // powerset

    // --------------------------------------------------------------------------------------------------------------
    // O(n!) - Factorial time
    // permutaions
}