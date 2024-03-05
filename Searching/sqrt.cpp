#include <iostream>
using namespace std;

int sqrt(int x)
{
    int low = 1;
    int high = x;
    long long int ans = -1;

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long msq = mid * mid;

        if (msq == x)
        {
            return mid;
        }

        else if (msq > x)
        {
            high = mid - 1;
        }
        else if (msq < x)
        {
            low = mid + 1;
            ans = mid;
        }
    }

    return ans;
}
int main()
{
    int x = 9883934;
    cout << sqrt(x);
}