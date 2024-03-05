#include<iostream>
using namespace std;

int maxArray(int arr[], int n)
{
    int res = 0 ;
    int maxEnding = 0;

    for(int i = 1; i < n ; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res,maxEnding);
    }

    return res;
}
int main()
{
    int arr[] = {-3,8,-2,4,-5,6};
    int n = 6;
    cout<<maxArray(arr,n);
}