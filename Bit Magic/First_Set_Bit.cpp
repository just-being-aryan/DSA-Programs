#include<iostream>
using namespace std;

int count_first_set_bit(int n)
{
    int position = 1;
    if(n<=0)
    {
        return 0;
    }

    int m = 1; //initaliazing mask m with 1 as a dummy value to start traversing through bits

    while(!(n & m))        //if bitwise of n and m is equal to 0, m left shift itself to next bit to check that the bit is set, and finally when the bit is set it returns the position.
    {
        m = m<<1;         //as the bit is unset, it shifts to the next bit in set to the left.
        position = position + 1;
    }

    return position;
}

int main()
{
    int n;
    cout<<"Please Enter the value of n"<<endl;
    cin>>n;
    cout<<count_first_set_bit(n)<<endl;
}