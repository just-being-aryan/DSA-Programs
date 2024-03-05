#include<iostream>
using namespace std;


unsigned int swap_bits(int n)
{
    unsigned int evenMask = 0xAAAAAAAA;

    unsigned int oddMask = 0x55555555;

    unsigned int evenBits = (n & evenMask) >> 1;

    unsigned int oddBits = (n & oddMask ) << 1;

    unsigned int result = evenBits | oddBits ;

    return result;
}

int main()
{
    cout<<swap_bits(23)<<endl;
}

