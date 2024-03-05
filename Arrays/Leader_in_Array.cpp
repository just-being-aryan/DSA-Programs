#include<iostream>
using namespace std;

void leader(int arr[], int n)
{
    int currentLeader = arr[n-1];
    cout<<currentLeader<<" ";

    for(int i = n-2; i>= 0 ; i--)
    {
        if(arr[i]>currentLeader)
        {
            currentLeader = arr[i];
            cout<<currentLeader<<" ";
        }
    }
}



int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    int n = 7;
    leader(arr,n);
}




//Naive Solution 0(N^2)

/*
void leader(int arr[], int n)
{
    for(int i = 0 ; i<n ; i++)
    {   
        bool flag = false;
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[i]<=arr[j])
            {
                flag = true;
                break;
            }
        }

        if(flag == false)
        {
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    int n = 7;
    leader(arr,n);
}
*/