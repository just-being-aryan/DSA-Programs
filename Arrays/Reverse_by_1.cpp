#include<iostream>
using namespace std;

void Reverse(int arr[], int n)
{
    int temp = arr[0];
    for(int i = 1; i < n ; i++)
    {
        arr[i-1] = arr[i];
    }

    arr[n-1]=temp;

    

    for(int j = 0 ; j < n ; j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    Reverse(arr,n);
}