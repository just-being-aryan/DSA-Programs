#include <iostream>
using namespace std;

bool Prime(int n)
{
    if(n == 1)
    {
        return false;
    }

    for(int i = 3; i <= n ; i++)
    {
        if(n%i == 0)
        {
            return false;
        }

        return true;
    }
}

int main()
{
    cout<<Prime(13);
}