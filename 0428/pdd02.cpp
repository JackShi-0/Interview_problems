#include <bits/stdc++.h>
using namespace std;
int reverse(vector<int> &vb) {
  vector<int> vi;
  int zero = 0;
  int one = 0;
  int tmp0 = 0;
  int tmp1 = 0;
  int max1;
  int len = vb.size();
  for (int i = 0; i < len; i++) {
    if (vb[i] == 1) {
      one++;
    } else {
      zero++;
    }
  }
  if (one == len) {
    return one - 1;
  }
  max1 = one;
  for (int i = 0; i < len; i++) {
    tmp0 = tmp1 = 0;
    for (int j = i; j < len; j++) {
      if (vb[j] == 1) {
        tmp1++;
      } else {
        tmp0++;
      }
      int allone = one - tmp1 + tmp0;
      if (allone > max1) {
        max1 = allone;
      }
    }
  }
  return max1;
}
int main() {
  int N;
  cin >> N;
  vector<int> nums;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    nums.push_back(n);
  }
  cout << reverse(nums);
}