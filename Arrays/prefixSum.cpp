
#include <iostream>
using namespace std;

int prefixSum(int arr[], int pSum[], int start, int end)
{

    if (start == 0)
    {
        return pSum[end];
    }
    else
    {
        return pSum[end] - pSum[start - 1];
    }
}

int main()
{

    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int n = 7;

    int Sum[n];
    Sum[0] == arr[0];
    for (int i = 1; i < n; i++)
    {
        Sum[i] = Sum[i - 1] + arr[i]; // The array will look like [2,2+8,2+8+3,2+8+3+9,2+8+3+9+6,2+8+3+9+6+5,2+8+3+8+6+5+4] = > [2,10,13,22,28,33,37]
    }

    cout << prefixSum(arr, Sum, 1, 3);
}

/*  Naive Way


#include<iostream>
using namespace std;

int getPrefixSum(int arr[],int start, int end)
{
    int count = 0 ;
    for(int i = start; i <= end ; i++)
    {
        count+=arr[i];
    }
    return count;
}

int main()
{
    int arr[] = {2,8,3,9,6,5};
    cout<<getPrefixSum(arr,0,2);
}
*/