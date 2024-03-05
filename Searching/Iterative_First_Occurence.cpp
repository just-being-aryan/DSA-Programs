#include <iostream>
using namespace std;

int firstOcc(int arr[], int low, int high, int x)
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

int main()
{
    int arr[] = {5, 10, 10, 15, 20, 20, 20};
    int n = 7;
    int x = 10;
    cout << firstOcc(arr, 0, n - 1, x);
}