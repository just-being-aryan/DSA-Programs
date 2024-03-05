#include<iostream>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }

    
}
void reverseByD(int arr[], int n, int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

    for(int j = 0 ; j < n ; j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{   
    int arr[] = {8,9,6,4};
    int n = 4;
    reverseByD(arr,n,3);
}