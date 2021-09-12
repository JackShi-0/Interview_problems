//字符串s，长度为n，好的字符串：所有单词出现次数均是k或k的整数倍，则字符串是好的。求一个长度与给定字符串相同，且字典序
//比给定字符串小的好字符串，不存在时输出-1，存在时输出字典序中最大的。
// 2 abcd output:abba
// 3 abba -1
#include <bits/stdc++.h>

using namespace std;

vector<int> v(26);
int t = 0, k;

bool dfs(int i, int n, string &s, bool flag) {
    if (i == n) return t == 0;
    char old_c = s[i];
    for (char c = flag ? 'z' : s[i]; c >= 'a'; --c) {
        int cnt = v[c - 'a'];
        int need = cnt == 0 ? k - 1 : -1;
        if (t + need > n - i - 1) continue;

        v[c - 'a'] = cnt == 0 ? k - 1 : cnt - 1;
        t += need;
        s[i] = c;

        if (dfs(i + 1, n, s, flag | (c < old_c))) return true;

        v[c - 'a'] = cnt;
        t -= need;
    }
    s[i] = old_c;
    return false;
}

int main() {
    string s;
    cin >> k >> s;
    if (k == 1) { cout << s << "\n"; return 0; }
    else if (s.size() % k != 0) cout << "-1\n";
    else if (!dfs(0, s.size(), s, false)) cout << "-1\n";
    else cout << s << "\n";
}