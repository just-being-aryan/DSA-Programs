/*Given a number and its reverse. Find that number raised to the power of its own reverse.
Note: As answers can be very large, print the result modulo 109 + 7.*/

#include<iostream>
using namespace std;


long long reversePower(int N, int R)     //N is the original Number, R is its Reverse
{
    if(R == 0)
    {
        return 1;              //As anything raised to the power of 0 is 1 (base case for Recursive Function)
    }


    long long m = 1000000007; //10^8 + 7 Modulo for larger inputs
    long long halfPower = reversePower(N, R/2);    //Calculcates Half Power of N raised to R/2  (if N is even)
    long long result = (halfPower*halfPower) % m;  //Calculates Full Power By multiplying half Power by itself and performs Modulo(for larger values)

    if( R % 2 != 0)
    {
        result *= N % m;       //Calculcates Half Power of N raised to R/2  (if N is odd)
    }

    return (result)%m;
}

int main()
{
    cout<<reversePower(12,21)<<endl;
}

