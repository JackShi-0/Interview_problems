// #include <bits/stdc++.h>
// using namespace std;
// string check(string s) {
//   int i = 0, j = s.length() - 1;
//   int flag = 0;
//   while (i < j) {
//     if (s[i] != s[j]) {
//       if (flag == false) {
//         flag = 1;
//       } else {
//         return "No";
//       }
//     }
//     i += 1;
//     j -= 1;
//   }
//   return "Yes";
// }
// int main() {
//   string s;
//   while (cin >> s) {
//     cout << check(s) << endl;
//   }
// }

#include <bits/stdc++.h>

#include <unordered_set>
using namespace std;

int helper(vector<int> s1, unordered_set<int> s2, int m, int n, int k) {
  int count = 0;
  for (auto s : s1) {
    if (s2.find(k - s) != s2.end()) {
      count += 1;
    }
  }
  return count;
}
int main() {
  int M, N, K;
  cin >> M >> N >> K;
  vector<int> s1;
  unordered_set<int> s2;
  for (int i = 0; i < M; i++) {
    int num;
    cin >> num;
    s1.push_back(num);
  }
  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;
    s2.insert(num);
  }
  cout << helper(s1, s2, M, N, K);
}