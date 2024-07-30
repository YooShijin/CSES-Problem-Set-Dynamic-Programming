#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int arr[n];
    int dp[sum + 1];
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    for (int i = 1; i <= sum; i++)
    {
        dp[i] = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (i >= arr[j] && dp[i - arr[j]] != -1)
            {
                dp[i] = min(dp[i], dp[i - arr[j]] + 1);
            }
        }
        if (dp[i] == INT_MAX)
            dp[i] = -1;
    }
    cout << dp[sum];
    return 0;
}