#include<iostream>
using namespace std;

int sumofDigits(int n)
{   
    if(n==0)
    {
        return 0;
    }

    int lastBit = n % 10;
    n = n/10;
    return sumofDigits(n) + lastBit;
        
}
int main()
{
    cout<<sumofDigits(12345);
}



