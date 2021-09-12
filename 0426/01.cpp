//输出最长要求序列 驼峰序列
//input:    10
//          1 6 9 8 2 4 8 2 5 2
//output: 5
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int res = 0;
    cin >> n;
    vector<int> v(n),l0(n),l1(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 1; i < n; ++i) {
        if (v[i] > v[i-1]) l0[i] = max(l0[i], l0[i-1] + 1);
    }
    for (int i = n-2; i >= 0; --i) {
        if (v[i] > v[i+1]) l1[i] = max(l1[i], l1[i+1] + 1);
    }
 
    for (int i = 0; i < n; ++i) {
        if (l0[i] >= 1 && l1[i] >= 1) {
            res = max(res, l0[i] + l1[i] + 1);
        }
    }
    cout << res << "\n";
}

