#include <iostream>
using namespace std;

int getPeak(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    if (low > high)
    {
        return -1;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (mid == 0 || arr[mid - 1] <= arr[mid] && mid == n - 1 || arr[mid + 1] <= arr[mid])
        {
            return mid;
        }

        else if (mid > 0 && arr[mid - 1] >= arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}

int main()
{
    int arr[] = {1, 13};
    int n = 2;
    cout << getPeak(arr, n);
}
