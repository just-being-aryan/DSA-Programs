#include <iostream>
using namespace std;

int countBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res = res + 1;
    }

    return res;
}
int main()
{
    int n;
    cout << "Please Enter an input :" << endl;
    cin >> n;
    cout << countBits(n) << endl;
}

/*
This Solution uses Brian Kernigham's Algorithm which
subtracts 1 from n and does Bitwise AND operation to clear off the
right most bit in the number respectively.
*/