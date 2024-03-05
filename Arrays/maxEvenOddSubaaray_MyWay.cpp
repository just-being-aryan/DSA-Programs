#include <iostream>
using namespace std;

// Maximum Length Even Odd Array Problem
int helper(int arr[], int n)
{
    int count = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i + 1] % 2 == 1)
            {
                count++;
            }
            else
            {
                count = 1;
            }
        }

        else if (arr[i] % 2 == 1)
        {
            if (arr[i + 1] % 2 == 0)
            {
                count++;
            }
            else
            {
                count = 1;
            }
        }
    }

    return count;
}
int main()
{
    int arr[] = {1, 2};
    int n = 2;
    cout << helper(arr, n);
}