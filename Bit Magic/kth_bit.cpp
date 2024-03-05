#include <iostream>
using namespace std;

void isSet(int n, int k)
{
    int x = 1;
    for (int i = 1; i < k; i++)
    {
        x = x * 2;
    }
    if ((n & x) != 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    isSet(5, 3);
    return 0;
}
