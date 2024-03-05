#include<iostream>
using namespace std;


void swapZero(int arr[], int n)
{
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }


    for(int j = 0 ; j < n ; j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,0,0,5,0,0,6,0,0,7};
    int n = 12;
    swapZero(arr,n);
}

























/*void zeroes(int arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]==0)
        {
            for(int j = i+1 ; j < n; j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }

    for(int k = 0 ; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
}

int main()
{
    int arr[] = {10,5,0,0,8,0,9,0};
    int n = 8;
    zeroes(arr,n);
}
*/