#include <bits/stdc++.h>

#include <algorithm>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> input;
  while (n--) {
    int num;
    cin >> num;
    input.push_back(num);
  }
  sort(input.begin(), input.end());
  int sum = accumulate(input.begin(), input.end(), 0);
  int len = input.size();
  int ans = 0;
  for (int i = 0; i < len; i++) {
    sum -= input[i];
    if (sum < m) {
      ans = sum + input[i];
      break;
    }
  }
  cout << ans;
}