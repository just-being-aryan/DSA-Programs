#include<iostream>
#include<algorithm>
using namespace std;
//Efficient Solution:(t.c = 0(n))


int maximumDifference(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minValue = arr[0];

    for(int j = 1 ; j < n ; j++)
    {
        res = max(res,arr[j]-minValue);
        minValue = min(minValue,arr[j]);
    }

    return res;
}

int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = 7;
    cout<<maximumDifference(arr,n);
}













//Naive Way
/*
void maximumDifference(int arr[], int n)
{   
    int max;
    int min;
    for(int i = 0 ; i < n ; i++)
    {   
        for(int j = i+1 ; j < n ; j ++)
        {   
            
            if(arr[i]>=arr[j])
            {
                max = max_element(arr,n);
                cout<<max;
            }
            else if(arr[i]<arr[j])
            {
                min = arr[i];
            }
        }
    }

    int difference= max-min;
    //cout<<difference;

    
}
int main()
{
    int arr[] = {2,3,10,8,4,6,1};
    int n = 7;
    maximumDifference(arr,n);
}
*/