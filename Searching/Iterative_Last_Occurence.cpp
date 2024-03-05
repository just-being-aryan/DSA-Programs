#include <iostream>
using namespace std;

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

int main()
{
    int arr[] = {5, 10, 10, 15, 20, 20, 20};
    int n = 7;
    int x = 20;
    cout << lastOcc(arr, 0, n - 1, x, n);
}

/*
Recursive Approach

int lastOcc(int arr[], int n, int x, int low, int high)
{
    if(low>high)
    {
        return -1;
    }

    while(low<=high)
    {
        if(arr[mid] > x)
        {
            lastOcc(arr,n,x,low,mid-1);
        }
        else if(arr[mid] < x)
        {
            lastOcc(arr,n,x,mid+1,high);
        }
        else
        {
            if(mid == n-1 || arr[mid] != arr[mid+1])
            {
                return mid;
            }
            else
            {
                return lastOcc(arr,n,x,mid+1,high)
            }
        }
    }
}



*/