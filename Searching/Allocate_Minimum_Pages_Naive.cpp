#include<iostream>
#include<climits>
using namespace std;

const int INF = INT_MAX;

int sum(int arr[], int start, int end)
{   
    int sum = 0;
    for(int i = start ; i<=end ; i++ )
    {
        sum+=arr[i];
    }
    return sum;
}

int minPages(int arr[], int n, int k)
{
    if(k==1)
    {
        return sum(arr,0,n-1);
    }
    
    if(n==1)
    {
        return arr[0];
    }
    
    int res = INF;
    for(int i = 0 ; i < n ; i++)
    {
        res = min(res,max(minPages(arr,i,k-1),sum(arr,i,n-1)));
    }

    return res;
}



int main()
{
    int arr[] = {10,5,30,1,2,5,10,10};
    int n = 8;
    int k = 3;
    cout<<minPages(arr,n,k);
}