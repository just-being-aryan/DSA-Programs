#include <iostream>
using namespace std;

int firstOccurence(int arr[], int low, int high, int x)
{

    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;

    if (arr[mid] > x)
    {
        return firstOccurence(arr, low, mid - 1, x);
    }

    else if (arr[mid] < x)
    {
        return firstOccurence(arr, mid + 1, high, x);
    }
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            return firstOccurence(arr, low, mid - 1, x);
        }
    }
}

int main()
{
    int arr[] = {5, 10, 10, 15, 20, 20, 20};
    int n = 7;
    int x = 10;
    cout << firstOccurence(arr, 0, n - 1, x);
}
// Naive
/*
int firstOccurence(int arr[], int n, int x)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,10,10,10,20,20,40};
    int n = 7;
    int x = 10;
    cout<<firstOccurence(arr,n,x);
}

*/