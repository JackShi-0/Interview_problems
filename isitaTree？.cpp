// #include <algorithm>
// #include <cstdio>
// #include <cstring>
// using namespace std;
// const int MAX = 1e4 + 10;
// int pre[MAX];  ///并查集记录父亲节点
// int in[MAX];   ///入度
// int vis[MAX];  ///节点是否存在
// void init() {
//   int i;
//   for (i = 1; i < MAX; i++) {
//     vis[i] = 0;
//     in[i] = 0;
//     pre[i] = i;
//   }
// }
// int Find(int x) {
//   if (pre[x] == x) {
//     return x;
//   } else {
//     return Find(pre[x]);
//   }
// }
// void Union(int root1, int root2) {
//   int x, y;
//   x = Find(root1);
//   y = Find(root2);
//   if (x != y) {
//     pre[x] = y;
//   }
// }
// int main() {
//   int i, root, counts, a, b, flag, ans = 1;
//   while (scanf("%d%d", &a, &b) != EOF) {
//     if (a == -1 && b == -1) {
//       break;
//     }
//     if (a == 0 && b == 0)  ///空树
//     {
//       printf("Case %d is a tree.\n", ans);
//       ans++;
//       continue;
//     }
//     init();
//     vis[a] = 1;
//     vis[b] = 1;
//     in[b]++;
//     Union(a, b);
//     while (scanf("%d%d", &a, &b) != EOF) {
//       if (a == 0 && b == 0) {
//         break;
//       }
//       vis[a] = 1;
//       vis[b] = 1;
//       in[b]++;
//       Union(a, b);
//     }
//     flag = 1;
//     root = 0;
//     counts = 0;
//     for (i = 1; i < MAX; i++) {
//       if (vis[i] && in[i] == 0)  ///根节点个数
//       {
//         { flag = 0; }
//         if (vis[i] && pre[i] == i)  ///所有点都在一个集合中
//         {
//           counts++;
//         }
//       }
//       if (root != 1 || counts > 1) {
//         flag = 0;
//       }
//       if (flag) {
//         printf("Case %d is a tree.\n", ans);
//         ans++;
//       } else {
//         printf("Case %d is not a tree.\n", ans);
//         ans++;
//       }
//     }
//     return 0;
//   }
// }

//看了以上的各个答案，大多用出度入度解决，可是这样并不能处理有环的情况，
//比如 1 2 3 4 4 5 5 3 0 0 ，这不是一棵树，但是用出度会判断为一棵树。
//但是这样确实可以通过所有测试，难道是我庸人自扰了
//以下借用并查集的思路实现
#include <iostream>
using namespace std;
#include <map>
#include <vector>
int find(map<int, int> &m, int x) {
  int r = x;
  while (m.find(r) != m.end() && m[r] != x) r = m[r];
  return r;
}
bool isTree(map<int, int> &m) {
  int r = find(m, m.begin()->first);
  for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
    if (find(m, it->first) != r || find(m, it->first) == -1) return false;
  }
  return true;
}
int main() {
  int a, b, times = 0;
  map<int, int> m;
  while (cin >> a >> b) {
    if (a == -1 && b == -1) return 0;
    if (a == 0 && b == 0) {
      cout << "Case " << ++times << " is " << (isTree(m) ? "" : "not ")
           << "a tree." << endl;
      m.clear();
    } else {
      if (m.find(b) != m.end() || a == b)
        m[b] = -1;
      else
        m[b] = a;
    }
  }
}
