// SLIDING WINDOW TECHNIQUE
// T.C -> 0(nk)

#include <iostream>
#include <climits>
using namespace std;

int maxKSub(int arr[], int n, int k)
{
    int res = INT_MIN;
    for (int i = 0; i + k - 1 < n; i++)
    {
        int curr_sum = 0; // default sum of subArray
        for (int j = 0; j < k; j++)
        {
            curr_sum += arr[i + j]; // sum of current subArray
        }
        res = max(res, curr_sum); // Max of subarray
    }

    return res;
}
int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = 6;
    cout << maxKSub(arr, n, 3);
}