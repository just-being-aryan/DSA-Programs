#include <iostream>
#include <cmath>
using namespace std;

int pow(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }

    int temp = pow(x,n/2);
    temp = temp * temp;
    if(n % 2 == 0)
    {
        return temp;
    }
    else
    {
        return temp*x;
    }
}

int main()
{
    cout<<pow(2,3)<<endl;
}



/*Here's a breakdown of how the code works:

1 )If n is 0, the function returns 1 because any number raised to the power of 0 is 1.

2) The function calculates the result of x^(n/2) by recursively calling pow(x, n/2) and stores it in the temp variable. This is based on the idea that x^n can be expressed as (x^(n/2))^2.

3) It then squares the temp value to compute x^n = (x^(n/2))^2.

4) If n is even (n % 2 == 0), it returns the temp value because x^n = (x^(n/2))^2 when n is even.

5) If n is odd, it multiplies the temp value by x before returning it because x^n = x * (x^(n/2))^2 when n is odd.
*/