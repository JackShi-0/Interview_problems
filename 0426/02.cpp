//完美数//p和p的整数倍y满足只由0，1，x（2-9）组成，y是p的完美数
//输入n，求n的完美数（0<n<=100）,不存在输出-1
//98 1666
//32 160
//13 13
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, M = 0;
    cin >> N;
    while (1) {
        if (M > LLONG_MAX - N) {
            cout << "-1\n";
            return 0;
        }
        M += N;

        set<char> s;
        for (auto c : to_string(M)) {
            if (c < '2') continue;
            s.insert(c);
        }
        if (s.size() <= 1) break;
    }
    cout << M << "\n";
}