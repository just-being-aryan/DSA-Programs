#include <iostream>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }

    return (jos(n - 1, k) + k - 1) % n + 1;
}
int main()
{
    cout << jos(5, 3) << endl;
    return 0;
}