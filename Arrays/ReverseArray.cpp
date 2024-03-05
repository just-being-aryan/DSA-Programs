#include<iostream>
using namespace std;

void Reverse(int arr[], int n)
{
    int low = 0;
    int high = n-1;

    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    
     for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}



int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    Reverse(arr,n);
    return 0;
}