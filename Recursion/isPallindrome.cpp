#include <iostream>
using namespace std;

bool isPallindrome(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    return (str[start] == str[end]) && isPallindrome(str, start + 1, end - 1);
}

int main()
{
    string str = "abba";
    cout << isPallindrome(str, 0, str.length() - 1);
}