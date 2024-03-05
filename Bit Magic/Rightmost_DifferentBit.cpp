#include<iostream>
using namespace std;

int Rightmost_DifferentBit(int m, int n)
{
    int xorResult = m^n;
    int position = 1;
    if(xorResult == 0)
    {
        return -1;
    }

    while((xorResult & 1) == 0)
    {
        xorResult >>= 1;
        position++;
    }

    return position;

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
    cout<<Rightmost_DifferentBit(m,n)<<endl;
}