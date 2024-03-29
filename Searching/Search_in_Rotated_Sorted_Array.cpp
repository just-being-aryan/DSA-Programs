#include <iostream>
using namespace std;

int Search(int arr[], int x, int n, int low, int high)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[low] <= arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[high] >= arr[mid])
        {
            if (x > arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    int arr[] = {100, 200, 300, 400, 20, 30, 40};
    int n = 7;
    int low = 0;
    int high = n - 1;
    int x = 50;
    cout << Search(arr, x, n, low, high);
}