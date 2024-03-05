#include<iostream>
using namespace std;

int insertion(int arr[], int n, int x, int cap, int pos)
{
    if(n==cap)
    {
        return n;
    }

    int index = pos-1;
    for(int i = n-1; i>=index ; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[index] = x;
    
    for(int j = 0 ; j<n ; j++)
    {
        cout<<arr[j]<<" ";
    }
    return (n+1);
}

int main()
{
    int arr[10] = {1,3,4,5,6,7,8,9,10};
    int n = 10;
    int x = 2;
    int pos = 2;
    int cap = 9;
    cout<<insertion(arr,n,x,cap,pos);
    
}