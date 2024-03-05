#include<iostream>
using namespace std;

int countBits(int n)
{
    int result = 0;
    while(n>0)
    {
        result = result + (n&1);
        n = n/2;
    }

    return result;
}

int main()
{
    cout<<countBits(5)<<endl;
}