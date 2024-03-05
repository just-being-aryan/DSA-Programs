#include<iostream>
using namespace std;

int Odd_Occuring(int arr[],int n)
{
    int res = 0 ; 
    for(int i = 0 ; i<n ; i++)
    {   
        res = res ^ arr[i];
    }

    return res;
}

int main()
{
    int arr[] = {7,8,7,7,8,8};
    cout<<Odd_Occuring(arr,5)<<endl;
}




/*NAive solution


int Odd_Occuring(int arr[], int n)
{

    for(int i = 0 ; i < n; i++)
    {
        int count = 0;

        for(int j = 0 ; j < n ;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count % 2 != 0)
        {
            return arr[i];
        }

    }

    
}


int main()
{   
    int arr[] = {7,6,6,7,7,7,6};
    int n = 5;
    cout<<Odd_Occuring(arr,n)<<endl;
}

*/