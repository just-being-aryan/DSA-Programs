#include<iostream>
using namespace std;


int isSet(int n, int k)
{
    int x = (1<<(k-1));
    if( (n & x) != 0)
    {
        cout<<"Yes"<<endl;
    }

    else
    {
        cout<<"No"<<endl;
    }
}
int main()
{
    cout<<isSet(5,4)<<endl;
}

/*Another SoL

void isSet(int n,int k)
{
    int x = (n>>(k-1));
    if( (x&1) != 0 )
    {
        cout<<"Yes";
    }

    else
    {
        cout<<"No";
    }
}