#include<iostream>
using namespace std;

void PowerSet(string str)
{
    int n = str.length();
    int psize = 1 << n; // 2^n

    for (int i = 0; i < psize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j) != 0)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
}

int main()
{
    PowerSet("abc");
    return 0;
}
