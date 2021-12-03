#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  for (int l = 0; l < t; l++) {
    int k, m;
    cin >> k >> m;
    int min_k = pow(10, k - 1);
    int max_k = pow(10, k) - 1;
    int count = 0;
    for (int i = min_k; i <= max_k; i++) {
      int sum = 0;
      int temp = i;
      for (int j = 0; j < k; j++) {
        sum += temp % 10;
        temp = temp / 10;
      }
      //   cout << sum << ' ';
      if (sum == m) {
        count++;
      }
    }
    cout << count << endl;
  }
}