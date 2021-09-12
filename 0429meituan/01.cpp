# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b;
    while (cin >> n >> m >> a >> b)
    {
        vector<int> mm;
        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;
            mm.push_back(tmp);
        }
        sort(mm.begin(), mm.end());
        int mincake = mm[0], maxcake = mm[m-1];    // 已经烤好的较小的蛋糕和较大的蛋糕
        
        int minCake = (a < b) ? a : b;    // 需要的较小的蛋糕
        int maxCake = (a >= b) ? a : b;   // 需要的较大的蛋糕
        
        if (minCake < mincake && maxCake > maxcake && n - m >= 2)
            cout << "YES" << endl;
        else if (minCake == mincake && maxCake == maxcake && n - m >= 0)
            cout << "YES" << endl;
        else if (minCake < mincake && maxCake == maxcake && n - m >= 1)
            cout << "YES" << endl;
        else if (minCake == mincake && maxCake > maxcake && n - m >= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}