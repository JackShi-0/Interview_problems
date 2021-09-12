#include <bits/stdc++.h>
using namespace std;
int GetSmallestSum(std::vector<int>& vec);

// long long GetSmallestSum(std::vector<int>& vec) {
//   sort(vec.begin(), vec.end());
//   int len = vec.size();
//   int sum = vec[0] * (len - 1);
//   int count = len - 1;
//   for (int i = 1; i < len; i++) {
//     //   3个数 2 2 1
//     //   4个数 3 3 2 1
//     sum += vec[i] * count;
//     count--;
//   }
//   return sum;
// }
int GetSmallestSum(std::vector<int>& vec) {
  priority_queue<int, vector<int>, greater<int> > big_heap;
  vector<int> newVec;
  int len = vec.size();
  for (int i = 0; i < len; i++) {
    big_heap.push(vec[i]);
  }
  for (int i = 0; i < len; i++) {
    int temp = big_heap.top();
    big_heap.pop();
    temp += big_heap.top();
    big_heap.pop();
    newVec.push_back(temp);
    big_heap.push(temp);
    // cout << temp << ' ';
  }
  int ans = newVec[len - 1];
  return ans;
}

int main() {
  vector<int> input = {5, 5, 6, 7};
  cout << GetSmallestSum(input);
}
