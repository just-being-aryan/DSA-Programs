#include<iostream>
using namespace std;

int deletion(int arr[], int& n, int x) {   
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            break;
        }
    }

    if (i == n) {
        return n; // Element not found, no change in array
    }

    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }
    
    n--; // Reduce the size of the array

    for (int k = 0; k < n-1; k++) {
        cout << arr[k] << " ";
    }

    return n;
}

int main() {
    int arr[] = {1, 2, 3, 73, 4, 5};
    int n = 6;
    int x = 73;
    
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nModified Array: ";
    cout << deletion(arr, n, x);
}
