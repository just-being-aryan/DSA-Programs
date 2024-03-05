#include <iostream>
using namespace std;

long long Factorial(int num)
{

    if (num == 0 || num == 1)
    {
        return 1;
    }

    if (num < 0)
    {
        cout << "Factorial Does Not Exists for negative number";
    }

    int count = 0;
    long long factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    cout << Factorial(5) << endl;
}