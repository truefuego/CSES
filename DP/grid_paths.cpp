#include<bits/stdc++.h>
using namespace std;

long long int MOD = 1e9+7;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> dp(n,vector<int> (n,0));
    vector<vector<char>> grid(n,vector<char> (n,'$'));
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> grid[i][j];
        }
    }
    if(grid[0][0] == '*' or grid[n-1][n-1] == '*') {
        cout << 0;
        return 0;
    }
    dp[0][0] = 1;
    for(int i = 1 ; i < n ; i++) {
        if(grid[i][0] == '.') {
            dp[i][0] = (dp[i][0] + dp[i-1][0]) % MOD;
        }
    }
    for(int i = 1 ; i < n ; i++) {
        if(grid[0][i] == '.') {
            dp[0][i] = (dp[0][i] + dp[0][i-1]) % MOD;
        }
    }
    for(int i = 1 ; i < n ; i++) {
        for(int j = 1 ; j < n ; j++) {
            if(grid[i][j] == '.') {
                dp[i][j] = (dp[i][j]+ dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
    }
    cout << dp[n-1][n-1];
    return 0;
}