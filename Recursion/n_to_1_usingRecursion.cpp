#include<iostream>
using namespace std;

int N_TO_1(int n)
{
    if(n==0)
    {
        return 0;
    }
    cout<<n<<endl;
    N_TO_1(n-1);
}


int main()
{
    cout<<N_TO_1(5)<<endl;
}