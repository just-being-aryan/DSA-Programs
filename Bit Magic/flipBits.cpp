#include<iostream>
using namespace std;

int flipBits(int m, int n)
{
    int xorResult = m^n;
    int count = 0;

    if(xorResult == 0)
    {
        return 0;
    }

    while(xorResult != 0)
    {
        if(xorResult & 1)
        {

            count++;
        }

        xorResult >>= 1;


    }

    return count;
}


int main()
{
     int m;
    int n;
    cout<<"Please Enter the value of m :"<<endl;
    cin>>m;
    cout<<endl;
    cout<<"Please Enter the value of n :"<<endl;
    cin>>n;
    cout<<endl;
    cout<<flipBits(m,n)<<endl;
}