// Sliding Window Technique
// T.C -> (O(n))

#include <iostream>
using namespace std;

int helper(int arr[], int n, int k)
{
    int curr = 0;
    for (int i = 0; i < k; i++) // Sum of first k elements subarray
    {
        curr += arr[i];
    }

    int res = curr;

    for (int i = k; i < n; i++)
    {
        curr = curr + arr[i] - arr[i - k]; // subtracting first elment of window and adding last element of window
        res = max(curr, res);              // Max sum of first k element subarray
    }

    return res;
}
int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = 6;
    cout << helper(arr, n, 4);
}