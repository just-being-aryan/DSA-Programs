#include<iostream>
using namespace std;

int digitalRoots(int n)
{
    if(n<10)
    {
        return n;
    }

    int sum = 0;
    while(n>0)
    {
        sum+=n%10;
        n = n/10;
    }

    return digitalRoots(sum);
}

int main()
{
    cout<<digitalRoots(256);
}