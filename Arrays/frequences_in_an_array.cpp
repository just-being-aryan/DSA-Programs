#include<iostream>
using namespace std;

void frequencies(int arr[], int n)
{   
    int freq = 1;
    int i = 1;

    if(n == 1 || arr[n-1] != arr[n-2])
    {
        cout<<arr[n-1]<<" : "<<1<<endl;
    }


    while(i<n)
    {
        while(i<n && arr[i] == arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" : "<<freq<<endl;
        freq = 1;
        i++;
        
    }

    
    
    
}
int main()
{
    int arr[] = {10,10,10,25,30,30};
    int n = 6;
    frequencies(arr,n);
    return 0;
}
