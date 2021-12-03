#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  float A, B;
  vector<vector<float>> input;
  for (int i = 0; i < n; i++) {
    cin >> A >> B;
    float C = A / B;
    input.push_back({A, B, C});
  }
  for (int i = 0; i < n; i++) {
    int temp = i;
    float a, b, c;
    for (int j = i + 1; j < n; j++) {
      if (input[j][2] > input[temp][2]) {
        temp = j;
      }
    }
    a = input[i][0], b = input[i][1], c = input[i][2];
    input[i][0] = input[temp][0], input[i][1] = input[temp][1],
    input[i][2] = input[temp][2];
    input[temp][0] = a, input[temp][1] = b, input[temp][2] = c;
  }
  for (int i = 0; i < n; i++) {
    cout << input[i][0] << ' ' << input[i][1] << " " << input[i][2] << endl;
  }
}