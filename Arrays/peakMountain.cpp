#include<iostream>
using namespace std;

int peakMountain(int arr[], int n)
{   
    int res = arr[0];
    for(int i = 1 ; i < n ; i ++)
    {
        if(arr[i] > arr[i-1])
        {
            if((arr[i] > arr [i-1]) && (arr[i]>arr[i+1]))
            {
                return i;
            }
        }
    }
    

    
}


int main()
{
    int arr[] = {0,10,20,5,2};
    int n = 4;
    cout<<peakMountain(arr,n)<<endl; 
}