#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int m = 1000000007;
    long long int dp[n+1];
    dp[0] = 1;
    for(int i=1; i<=n; i++){
        dp[i] = 0;
        for(int j = 1; j <= 6; j++){
            if (i-j >=0)
            {
                dp[i] = (dp[i] + dp[i-j])%m;
            }
    }
}
    cout<<dp[n];
return 0;
}