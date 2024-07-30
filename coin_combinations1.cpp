#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int arr[n];
    long long int dp[sum + 1];
    dp[0] = 1;
    long long int m = 1000000007;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    for (int i = 1; i <= sum; i++)
    {
        dp[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (i >= arr[j] && dp[i - arr[j]])
            {
                dp[i] = (dp[i] + dp[i - arr[j]])%m;
            }
        }
    }
    cout << dp[sum];
    return 0;
}