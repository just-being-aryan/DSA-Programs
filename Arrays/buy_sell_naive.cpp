#include <iostream>
using namespace std;
// Extremely Naive Way T.C - (0(n^4))
int helper(int price[], int start, int end)
{
    if (end <= start)
    {
        return 0;
    }

    int profit = 0;
    while (start < end)
    {
        for (int i = start; i < end; i++)
        {
            for (int j = i + 1; j < end; j++)
            {
                if (price[j] > price[i])
                {
                    int currentProfit = price[j] - price[i] + helper(price, start, i - 1) + helper(price, j + 1, end);
                    profit = max(profit, currentProfit);
                }
            }
        }

        return profit;
    }
}

int main()
{
    int arr[] = {1, 5, 3, 8, 12};
    int n = 5;
    cout << helper(arr, arr[0], n - 1);
}