#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n, c;
//     cin >> n >> c;
//     vector<string> ans;
//     int num;
//     while(n-- && cin >> num){
//         int i = num % c;
//         string tmp = "";
//         char j = (num / c) + 'A';
//         if(i==0){
//             j = j - 1;
//             tmp = j + to_string(c);
//         }else{
//             tmp = j + to_string(i);
//         }
//         ans.push_back(tmp);
//     }
//     int len = ans.size();
//     for (int i = 0; i < len; i++){
//         cout << ans[i] << endl;
//     }        
// }

// struct jiegou{
//     int l;
//     int r;
//     int k;
// };
// int main(){
//     string str;
//     cin >> str;
//     int q;
//     cin >> q;
//     int l, r, k;
//     while(q-- && cin >> l >> r >> k){

//     }
// }

    int numSubmat(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int> > row(n, vector<int>(m, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (j == 0) {
                    row[i][j] = mat[i][j];
                } else if (mat[i][j]) {
                    row[i][j] = row[i][j - 1] + 1;
                }
                else {
                    row[i][j] = 0;
                }
            }
        }
        int ans = 0;
        for (int j = 0; j < m; ++j) { 
            int i = 0; 
            stack<pair<int, int> > Q; 
            int sum = 0; 
            while (i <= n - 1) { 
                int height = 1; 
                while (!Q.empty() && Q.top().first > row[i][j]) {
                  	// 弹出的时候要减去多于的答案
                    sum -= Q.top().second * (Q.top().first - row[i][j]); 
                    height += Q.top().second; 
                    Q.pop(); 
                } 
                sum += row[i][j]; 
                ans += sum; 
                Q.push({ row[i][j], height }); 
                i++; 
            } 
        } 
        return ans;
    }

    int main(){
        int n;
        cin >> n;
        vector<vector<int> > mat(n,vector<int>(n,0));
        for (int i = 0; i < n; i++){
            string str;
            cin >> str;
            for (int j = 0; j < n;j++){
                if(str[j]=='.'){
                    mat[i][j] = 1;
                }else if(str[j]=='#'){
                    mat[i][j] = 0;
                }
            }        
        }
        // vector<vector<int> > mat = {{1,0},{1,1}};
        cout << numSubmat(mat);
        // for (int i = 0;i<n; i++){
        //     for (int j = 0; j < n;j++){
        //         cout << mat[i][j] << " ";
        //     }
        // }
    }