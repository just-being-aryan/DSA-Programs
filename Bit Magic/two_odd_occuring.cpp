#include<iostream>

using namespace std;

int two_odd_occuring(int arr[],int n)
{   
    int xorResult = arr[0];
    for(int i = 1 ; i<n ; i++)
    {
        xorResult = xorResult ^ arr[i];
    }

    int num1 = 0;
    int num2 = 0;

    int setBit = xorResult & ~(xorResult - 1);
    for(int i = 0 ; i < n ; i++)
    {
        if((arr[i] & setBit)!=0)
        {
            num1 = num1 ^ arr[i];
        } 
        else
        {
            num2 = num2 ^ arr[i];
        }
    }

    cout<<num1<<" "<<num2<<" "<<endl;
}


int main()
{
    int arr[] = {2,1,3,2,1,5};
    cout<<two_odd_occuring(arr,6)<<endl;
}