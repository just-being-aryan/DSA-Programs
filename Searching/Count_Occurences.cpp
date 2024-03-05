#include <iostream>
using namespace std;

int firstOcc(int arr[], int low, int high, int x, int n)
{
    if (low > high)
    {
        return -1;
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
}

int lastOcc(int arr[], int low, int high, int x, int n)
{
    if (low > high)
    {
        return -1;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < x)
        {
            low = mid + 1;
        }

        else if (arr[mid] > x)
        {
            high = mid - 1;
        }

        else
        {
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
}

int countOcc(int arr[], int low, int high, int x, int n)
{
    int first = firstOcc(arr, low, high, x, n);

    if (first == -1)
    {
        return 0;
    }
    else
    {
        return (lastOcc(arr, low, high, x, n) - first + 1);
    }
}

int main()
{
    int arr[] = {5, 10, 10, 15, 20, 20, 20, 20};
    int n = 8;
    int x = 20;
    cout << countOcc(arr, 0, n - 1, x, n);
}
