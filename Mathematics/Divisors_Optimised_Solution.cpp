#include<iostream>
#include<cmath>
using namespace std;

int Divisors(int n)
{
    int i;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << (n / i) << " ";
        }
    }
}
int main()
{
    cout<<Divisors(30)<<endl;
} 