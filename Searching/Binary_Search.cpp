#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = (high + low) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int x = 60;
    cout << Binary_Search(arr, n, x);
}

/*
int Linear_Search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 7};
    int n = 8;
    int x = 7;
    cout << Linear_Search(arr, n, x);
}
*/