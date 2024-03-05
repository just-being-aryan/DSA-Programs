#include<iostream>
using namespace std;

int normalMaxSum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding =arr[0];

    for(int i = 1 ; i < n ; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res,maxEnding);
    }

    return res;


}

int overallMaxSum(int arr[], int n)
{
    int maxNormal = normalMaxSum(arr,n);

    if(maxNormal < 0)
    {
        return maxNormal;
    }   

    int arr_sum = 0;

    for(int i = 0; i < n ; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i]; //inverting for finding the minimum subarray sum in original array  ---> which is equivalent to finding Max Subarray sum
    }

    int maxCircular = arr_sum + normalMaxSum(arr,n);

    return max(maxNormal,maxCircular);
}

int main()
{
    int arr[] = {8,-4,3,-5,4};
    int n = 5;
    cout<<overallMaxSum(arr,n);
}