#include<iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int n, int x,int low, int high)
{
    
    if(low>high)
    {
        return -1;
    }
    
    int mid = (low+high)/2;

    if(arr[mid]==x)
    {
        return mid;
    }
    
    else if(arr[mid]>x)
    {
        recursiveBinarySearch(arr,n,x,low,mid-1);
    }
    else if(arr[mid]<x)
    {
        recursiveBinarySearch(arr,n,x,mid+1,high);
    }
    

}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int x = 60;
    cout << recursiveBinarySearch(arr, n,x,0,n-1);
}