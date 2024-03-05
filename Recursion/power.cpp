#include <iostream>

using namespace std;

// Recursive function to calculate n^p
int RecursivePower(int n,int p){   
        
        if (p == 0) {
        return 1;
        }

    // Recursive case
        int halfPower = RecursivePower(n, p / 2);
        int result = halfPower * halfPower;

    // If p is odd, multiply by n one more time
        if (p % 2 != 0) {
        result *= n;
        }

    return result;
}

int main() {
    double n;
    int p;

    cout << "Enter the base (n): ";
    cin >> n;
    cout << "Enter the exponent (p): ";
    cin >> p;

    // Calculate n^p using the power function
    double result = RecursivePower(n, p);

    cout << n << "^" << p << " = " << result << endl;

    return 0;
}

