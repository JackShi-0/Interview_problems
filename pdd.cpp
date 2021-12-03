#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> s1 = {1, 2, 3, 4, 5};
  vector<int> s2 = {2, 4, 5};
  int len1 = s1.size();
  int len2 = s2.size();
  int pos = len1 + len2 - 1;
  s1.resize(pos + 1);
  len1--, len2--;
  while (len1 >= 0 && len2 >= 0) {
    s1[pos--] = s1[len1] > s2[len2] ? s1[len1--] : s2[len2--];
  }
  while (len2 >= 0) {
    s1[pos--] = s2[len2--];
  }
  reverse(s1.begin(), s1.end());
  for (int i = 0; i < s1.size(); i++) {
    cout << s1[i] << " ";
  }
}