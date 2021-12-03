#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long ans = 0;
  for (int i = 0; i < N * N; i++) {
    int num;
    cin >> num;
    ans += num;
  }
  cout << ans;
}

// vector<int> sums;
// NumArray(vector<int>& nums) {
//   int n = nums.size();
//   sums.resize(n + 1);
//   for (int i = 0; i < n; i++) {
//     sum[i + 1] = sum[i] + nums[i];
//   }
// }
// int main() {
//   int N;
//   vector<int> input;
//   for (int i = 0; i < N * N; i++) {
//     int num;
//     cin >> num;
//     input.push_back(num);
//   }
// }