#include<iostream>
using namespace std;

int one_TO_N(int n)
{   
    if(n==0)
    {
        return 0;
    }
    one_TO_N(n-1);
    cout<<n<<endl;
}

int main()
{
    cout<<one_TO_N(5)<<endl;
}