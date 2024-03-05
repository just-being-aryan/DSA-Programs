#include<iostream>
using namespace std;

int maxCircularSub(int arr[], int n)   // T.C = O(N^2)
{
    int res = 0 ;

    for(int i = 0 ; i < n ; i++)
    {
        int curr_sum = 0;
        int curr_max = 0 ;
        

        for(int j = 1 ; j < n ; j++)
        {
            int index = (i+j)%n; //This allows circular subArrays
            curr_sum += arr[index];
            curr_max = max(curr_max,curr_sum);
        }

        res = max(res,curr_max);
    }

    return res;
}
int main()
{
    int arr[] = {8,-4,3,-5,4};
    int n = 5;
    cout<<maxCircularSub(arr,n);
}