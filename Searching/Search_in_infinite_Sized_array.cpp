#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high)
{

    if (low > high)
    {
        return -1;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;

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
}

int Search(int arr[], int x, int n)
{
    if (arr[0] == x)
    {
        return 0;
    }

    int i = 1;
    while (arr[i] < x)
    {
        i = i * 2;
    }

    if (arr[i] == x)
    {
        return i;
    }
    int low = (i / 2) + 1;
    int high = i - 1;
    return binarySearch(arr, x, low, high);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int x = 2;
    cout << Search(arr, x, n);
}