#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

/*Mean - av of all elements of array */
/* Median - if n is odd, middle element of array is the answer otherwise
if n is even, the middle element and middle element + 1 's avg floor value gives the result*/

int median(int arr[], int n)
{   
    
    sort(arr,arr+n);
    int median;
    if(n%2==1)
    {
        int index = n/2 + 1;
        median = arr[index-1];
        
    }

    else if(n%2==0)
    {
        int i1 = n/2;
        int i2 = n/2 + 1;
        median = floor (( arr[i1 - 1] + arr[i2-1] ) / 2);
    
    }

    return median;
}


int mean(int arr[], int n)
{   
    sort(arr,arr+n);

    int sum = 0;
    int mean;
    for(int i = 0 ; i < n ; i++)
    {
        sum+=arr[i];
    }

    mean = floor(sum/n);

    return mean;
}


int main()
{
    int n = 4;
    int arr[] = {2,8,3,4};
    cout<<mean(arr,n)<<endl<<median(arr,n);
}