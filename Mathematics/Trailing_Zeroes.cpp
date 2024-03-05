#include <iostream>
using namespace std;


int Trailing_Zeroes(int num)
{   
    int result = 0;
    for(int i = 5 ; i <= num ; i*=5)
    {
        result += num/i;
    }
    
    return result;
}
int main()
{
    cout<<Trailing_Zeroes(100)<<endl;
}