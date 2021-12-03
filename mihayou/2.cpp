#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
      dp[i] = dp[i - 1] + 1;
      for (int k = 1; k < i; k++) {
        if (dp[i - k] == k - 1) {
          dp[i] = min(dp[i], k);
        }
      }
    }
    cout << dp[n];
  }
}