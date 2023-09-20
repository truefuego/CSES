#include<bits/stdc++.h>
using namespace std;

long long int MOD = 1e9+7;

int solve(int n, vector<int>& dp) {
    if(n < 0) {
        return 0;
    }
    if(n == 0) {
        return 1;
    }
    if(dp[n] != -1) {
        return dp[n];
    }
    long long int ans = 0;
    for(int i = 1 ; i < 7 ; i++) {
        ans = (ans + solve(n-i,dp)) % MOD;
    }
    return dp[n] = ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1,-1);
    long long ans = solve(n,dp);
    cout << ans << endl;
    return 0;
}