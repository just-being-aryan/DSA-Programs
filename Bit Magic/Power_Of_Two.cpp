#include <iostream>
using namespace std;
bool Power_of_two(int n)
{
    if (n <= 0)
    {
        return false;
    }

    return ((n & (n - 1)) == 0); // or n & ((n & (n-1)) == 0
}
int main()
{
    cout << Power_of_two(254) << endl;
}
