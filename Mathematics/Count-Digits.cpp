#include <iostream>
using namespace std;

int countDigits(int x)
{
    int result = 0;
    while (x != 0)
    {
        x = x / 10;
        result++;
    }
    return result;
}

int main()
{
    cout << "Please Enter a Digit : " << endl;
    int num;
    cin >> num;
    cout << "Total No of Digits are"
         << " " << countDigits(num) << endl;
}
