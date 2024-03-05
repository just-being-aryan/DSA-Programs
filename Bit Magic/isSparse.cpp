#include<iostream>
using namespace std;

bool isSparse(int N)
{
    while(N > 0)
    {
        if( (N & 3) == 3)
        {
            return 0;
        }

        N >>= 1;
    }


    return 1;
}

int main()
{
    cout<<"Please Enter a Number to check its sparse or not "<<endl;
    int n;
    cin>>n;
    cout<<isSparse(n)<<endl;
}