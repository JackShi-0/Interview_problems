#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> task;
  vector<int> time;
  for (int i = 0; i < N; i++) {
    int t;
    cin >> t;
    task.push_back(t);
  }
  for (int j = 0; j < M; j++) {
    int t2;
    cin >> t2;
    time.push_back(t2);
  }

  vector<int> preSum(N, 0);
  for (int i = 0; i < N; i++) {
    if (i == 0) {
      preSum[i] = task[i];
    } else {
      preSum[i] = preSum[i - 1] + task[i];
    }
  }
  for (int j = 0; j < M; j++) {
    int cur =
        upper_bound(preSum.begin(), preSum.end(), time[j]) - preSum.begin();
    if (cur > N) {
      //   res.push_back(0);
      cout << 0 << endl;
    } else {
      //   res.push_back(cur);
      cout << cur << endl;
    }
  }
}