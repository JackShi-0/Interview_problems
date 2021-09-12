//给定n，m 求n!的m进制表示表示中末尾有几个0，提示：x!的十进制末尾0的个数取决于x!中5的个数
//input: 5 2  output:3
//100 18  output 24
#include <bits/stdc++.h>

using namespace std;
typedef long long  ll;
int main() {
    ll N, M;
    cin >> N >> M;

    ll i = 2, Sqrt = sqrt(M);
    map<int, int> mp;
    while (M != 1) {
        if (M < i) {
            mp[M]++;
            break;
        }
        if (M % i == 0) {
            ++mp[i];
            M /= i;
        }
        else if (i == 2) ++i;
        else i += 2;
    }
    ll res = LLONG_MAX;
    for (auto [i, j] : mp) {
        ll cnt = 0, n = N;
        while (n > 1) {
            cnt += n / i;
            n /= i;
        }
        res = min(res, cnt / j);
    }
    cout << res << "\n";
}