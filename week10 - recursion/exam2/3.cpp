#include <cstring>
#include <cassert>

bool consecutiveSymbols(char *input, char *&start, char *&end)
{
    int size = strlen(input), occurrences = 1, max = 1, beginning = 1;
    for (int i = 1; i < size; i++)
    {
        if (input[i] == input[i - 1])
        {
            occurrences++;
            continue;
        }
        if (occurrences > max)
        {
            max = occurrences;
            start = input + beginning;
            end = input + i;
        }
        occurrences = 1;
        beginning = i;
    }
    if (occurrences > max)
    {
        max = occurrences;
        start = input + beginning;
        end = input + size;
    }
    return max != 1;
}

int main()
{
    char *start, *end;
    char input[] = "pbfdaaabcssll";
    assert(consecutiveSymbols(input, start, end) == true);
    assert(start == input + 4);
    assert(end == input + 7);

    char input1[] = "asdf";
    assert(consecutiveSymbols(input1, start, end) == false);

    char input2[] = "asdffpp";
    assert(consecutiveSymbols(input2, start, end) == true);
    assert(start == input2 + 3);
    assert(end == input2 + 5);

    char input3[] = "asdffppp";
    assert(consecutiveSymbols(input3, start, end) == true);
    assert(start == input3 + 5);
    assert(end == input3 + 8);
}