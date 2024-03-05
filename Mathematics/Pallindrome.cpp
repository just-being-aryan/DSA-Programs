#include <iostream>
using namespace std;

bool Pallindrome(int num)
{
    int originalNumber = num;
    int reversedNumber = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        num = num / 10;
    }

    return reversedNumber;
}

int main()
{
    cout << Pallindrome(1221) << endl;
}