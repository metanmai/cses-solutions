#include "../solution-template.hpp"

int findTotalCombinations(vector<int> &dp, int n) {
    if(n == 0) {
        return 1;
    }

    if(dp[n] != -1) {
        return dp[n];
    }

    int ways = 0LL;

    for(int i = 1; i <= 6; i++) {
        if(n - i >= 0) {
            ways = (ways + findTotalCombinations(dp, n - i)) % MOD;
        }
    }

    return dp[n] = ways;
}

void solve() {
    int i, j, k, n, m;
    string s;

    cin >> n;

    vector<int> dp(n + 1);
    dp[0] = 1;

    for(int nn = 1; nn <= n; nn++) {
        for(int i = 1; i <= 6; i++) {
            if(nn - i >= 0) {
                dp[nn] = (dp[nn] + dp[nn - i]) % MOD;
            }
        }
    }

    cout << dp[n] << endl;
}

int main() {
    freopen("output.txt", "w", stdout);
    freopen("output.txt", "a", stderr);

    solve();

    return 0;
}