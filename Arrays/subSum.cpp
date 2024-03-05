#include <iostream>
using namespace std;
// T.C - O(N)

int subSum(int arr[], int n, int sum)
{
    int start = 0;
    int curr = 0;

    for (int end = 0; end < n; end++)
    {
        curr += arr[end];

        while (curr > sum)
        {
            curr -= arr[start];
            start++;
        }

        if (curr == sum)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[] = {4, 8, 12, 5};
    int n = 4;
    cout << subSum(arr, n, 17);
}

/*

Naive Way :

int subSum(int arr[], int n, int sum)
{
    for(int i = 0 ; i < n ; i++)
    {
        int curr = 0 ;

        for(int j = i; j < n ; j++)
        {
            curr += arr[j];

            if(curr==sum)
            {
                return true;
            }
        }


    }

    return false;

}

int main()
{
    int arr[] = {3,2,0,4,7};
    int n = 5;
    cout<<subSum(arr,n,6);
}

*/