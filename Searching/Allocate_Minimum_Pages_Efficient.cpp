#include<iostream>
using namespace std;

bool isFeasible(int arr[],int n,int k,int ans)
{
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(pageSum + arr[i] > ans)
        {
            studentCount++;
            pageSum = arr[i];
        }
        else
        {
            pageSum+=arr[i];
        }
    }

    return (studentCount<=k);
}
int minPages(int arr[], int n, int k)
{
    int sum = 0;
    int mx = 0;
    
    for(int i = 0 ; i < n ; i++)
    {
        sum+=arr[i];
        mx = max(mx,arr[i]);
    }

    int low = mx;
    int high = sum;
    int res = 0;
    
    while(low<=high)
    {   
        int mid = (low+high)/2;
        if(isFeasible(arr,n,k,mid))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return res;
}
int main()
{
    int arr[] = {10,20,30,40};
    int n = 4;
    int k = 2;
    cout<<minPages(arr,n,k);
}