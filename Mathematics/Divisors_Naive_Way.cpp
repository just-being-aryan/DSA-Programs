#include <iostream>
using namespace std;

int Divisors(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    cout << Divisors(10000) << endl;
}