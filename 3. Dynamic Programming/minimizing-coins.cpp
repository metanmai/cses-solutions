#include "../solution-template.hpp"

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> coins(n), dp(x + 1, x + 1);
    dp[0] = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    for(int amount = 1; amount <= x; amount++) {
        for(int coin : coins) {
            if(amount - coin >= 0) {
                dp[amount] = min(dp[amount], 1 + dp[amount - coin]);
            }
        }
    }

    cout << (dp[x] == x + 1 ? -1 : dp[x]) << endl;
}

int main() {
    freopen("output.txt", "w", stdout);
    freopen("output.txt", "a", stderr);
    
    solve();
    
    return 0;
}