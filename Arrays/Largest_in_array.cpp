#include<iostream>
using namespace std;

int largestElement(int arr[], int n)
{   
    int element = arr[0];

    for(int i = 1 ; i <= n ; i++)
    {
        if(arr[i]>element)
        {
            element = arr[i];
        }
    }

    return element;
}

int main()
{
    int arr[] = {1,4,34,6,7};
    int n = 5;
    cout<<largestElement(arr,n);
}