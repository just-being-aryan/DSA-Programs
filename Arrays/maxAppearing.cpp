//T.C -> O(N+M)
// AUX SPACE -> O(N)

#include<iostream>
using namespace std;

int maxAppearing(int left[], int right[], int n)
{
    int freq[101] = {0};

    for(int i = 0 ; i < n ; i++)
    {
        freq[left[i]]++;
        freq[right[i]+1]--;
    }

    int res = 0;

    for(int i = 1 ; i < 100 ; i++)
    {
        freq[i] = freq[i-1] + freq[i];
        if(freq[i]>freq[res])
        {
            res = i;
        }
    }
    return res;
}
int main()
{
    int left[]= {1,2,4};
    int right[] = {4,5,7};
    cout<<maxAppearing(left,right,3);
}


/*

Naive Way : (T.C - O(N*M))
AUX SPACE O(N)

#include<iostream>
using namespace std;

int maxAppearing(int left[], int right[], int n)
{
    int freq[100] = {0};
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = left[i] ; j <= right[i] ; j++)
        {
            freq[j]+=1;
        }    
    }

    int res = 0;
    for(int i = 1 ; i < 100 ; i++)
    {
        if(freq[i]>freq[res])
        {
            res = i;
        }
    }

    return res;
}
int main()
{   
    int left[]= {1,2,4};
    int right[] = {4,5,7};
    cout<<maxAppearing(left,right,3);
}
*/