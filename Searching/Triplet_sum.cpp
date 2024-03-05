#include <iostream>
using namespace std;

bool isPair(int arr[], int n, int x, int si)
{
    int i = si;
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

bool isTripletSum(int arr[], int n, int x)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (isPair(arr, n, x - arr[i], i + 1))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 5, 10, 15, 18};
    int n = 5;
    int x = 33;
    cout << isTripletSum(arr, n, x);
}