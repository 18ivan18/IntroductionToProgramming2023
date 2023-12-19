#include <iostream>
bool used[3] = {0};

void print(int *arr, int n)
{
    std::cout << '[';
    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << ", ";
    }
    std::cout << "], ";
}

void backtrack(int *nums, int n, int *seq, int idx)
{
    if (idx >= n)
    {
        print(seq, idx);
        return;
    }
    // here we do not start from idx
    // for position seq[idx], we try to put each number on it
    for (int i = 0; i < n; ++i)
    {
        if (used[i])
        {
            continue;
        }
        seq[idx] = nums[i], used[i] = true;
        backtrack(nums, n, seq, idx + 1);
        used[i] = false;
    }
}
void permute(int *nums, int n)
{
    int *seq = new int[n];
    backtrack(nums, n, seq, 0);
    delete[] seq;
}

int main()
{
    int nums[3] = {1, 2, 3};
    permute(nums, 3);
}