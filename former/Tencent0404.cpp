#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<string>
#include<sstream>
#include<set>
using namespace std;

const int N = 1e4+5;
// int dp[N][N] = {0};

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	if(n==1){
		printf("1\n");
		return 0;
	}
	vector<vector<int>> dp(n, vector<int>(n, 0));
	for (int len = 2; len <= n;len++){
		for (int i = 0; i + len - 1 < n;i++){
			int j = i + len - 1;
			if(len&1){
				dp[i][j] = max(dp[i][j], max(dp[i + 1][j], dp[i][j - 1]));
			}else{
				dp[i][j] = max(dp[i][j], max(dp[i + 1][j], dp[i][j - 1]));
				if(s[i]-'0'+s[j]-'0'==10){
					dp[i][j] = max(dp[i][j], dp[i + 1][j - 1] + 2);
				}
			}
		}
	}
	printf("%d\n", n - dp[0][n - 1]);
	return 0;
}

// int main(){
// 	int n;
// 	string s;
// 	cin >> n;
// 	cin >> s;
// 	if(n==1){
// 		printf("1\n");
// 		return 0;
// 	}
// 	while(s.size()>=2){
// 		int tmp = s.size();
// 		for (int i = 0; i + 1 < tmp;i++){
// 			int j = i + 1;
// 			if(s[i]-'0'+s[j]-'0'==10){
// 				s.erase(s.begin() + i);
// 				s.erase(s.begin() + i);
// 				break;
// 			}
// 		}
// 		if(s.size()==tmp){
// 			break;
// 		}
// 	}
// 	printf("%d\n", n - dp[0][n - 1]);
// 	return 0;
// }

// int main(){
// 	int n;
// 	string s;
// 	cin >> n;
// 	cin >> s;
// 	if(n==1){
// 		printf("1\n");
// 		return 0;
// 	}
//     vector<vector<int>> dp(n, vector<int>(n, 0));
// 	for (int len = 2; len <= n;len++){
// 		for (int i = 0; i + len - 1 < n;i++){
// 			int j = i + len - 1;
// 			if(len&1){
// 				dp[i][j] = max(dp[i][j], max(dp[i + 1][j], dp[i][j - 1]));
// 			}else{
// 				dp[i][j] = max(dp[i][j], max(dp[i + 1][j], dp[i][j - 1]));
// 				if(s[i]-'0'+s[j]-'0'==10){
// 					dp[i][j] = max(dp[i][j], dp[i + 1][j - 1] + 2);
// 				}
// 			}
// 		}
// 	}
// 	printf("%d\n", n - dp[0][n - 1]);
// 	return 0;
// }