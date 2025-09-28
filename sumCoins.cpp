#include <bits/stdc++.h>
using namespace std;

int sumCoins(vector<int>& coins, int n) {
    if (n == 0) return 0;
    return coins[n-1] + sumCoins(coins, n-1);
}

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];
    cout << sumCoins(coins, n);
    return 0;
}
