#include <iostream>
using namespace std;

int mean(int A[], int N)
{
    // your code here
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }

    int avg = sum / N;
    return avg;
}

int main()
{
    int arr[] = {1, 2, 19, 28, 5};
    int n = 5;
    cout << mean(arr, n) << endl;

    cout << 5 / 2;
}

// T.C = THETA(N)
// Aux space  = THETA(1)

/*

Naive Solution :-


int getLargest(int arr[], int n)
{
    int largest = 0;
    for(int i = 1; i<=n ; i++)
    {
        if(arr[i] > arr[largest])
        {
            largest = i;
        }
    }

    return largest;
}


int secondLargest(int arr[], int n)
{
    int largest = getLargest(arr,n);
    int res = -1;
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(res==-1)
            {
                res = i;
            }
            else if(arr[i]>arr[res])
            {
                res = i;
            }
        }
    }
    cout<<"The second largest Element's index is :"<<endl;
    return res;
}

int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    cout<<secondLargest(arr,n);
}
*/