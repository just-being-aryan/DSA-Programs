#include<iostream>
using namespace std;


bool ePoint(int arr[], int n)
{
    int rs = 0;
    for(int i = 0 ; i < n ; i++)
    {
        rs+=arr[i];
    }

    int ls = 0;

    for(int i = 0 ; i < n ; i++)
    {
        rs-=arr[i];    //Suffix Sum

        if(ls==rs)
        {
            return true;
        }

        ls+=arr[i];     //Prefix Sum
    }

    return false;
}

int main()
{
    int arr[] = {4,2,-2};
    int n = 3;
    cout<<ePoint(arr,n)<<endl;
}








/*
//Naive Solution
// T.C -> O(N^2)

#include<iostream>
using namespace std;

int equilibriumPoint(int arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        int ls = 0 ;
        int rs = 0;

        for(int j = 0 ; j < i ; j++)
        {
            ls+=arr[j];
        }

        for(int k = i + 1 ; k < n ; k++)
        {
            rs+=arr[k];
        }

        if(ls==rs)
        {
            return true;
        }
    }

    return false;
}


int main()
{
    int arr[] = {4,2,-2};
    int n = 3;
    cout<<equilibriumPoint(arr,n)<<endl;
}

*/