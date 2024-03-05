#include <iostream>
using namespace std;

bool IsPairSum(int arr[], int n, int x)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            return true;
        }
        else if (arr[i] + arr[j] > x)
        {
            j = j - 1;
        }
        else
        {
            i = i + 1;
        }
    }

    return false;
}
int main()
{
    int arr[] = {2, 4, 8, 9, 11, 12, 20, 30};
    int n = 8;
    int x = 32;
    cout << IsPairSum(arr, n, x);
}