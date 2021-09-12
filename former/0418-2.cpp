#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<unordered_set>
#include<algorithm>
#include<string>
#include<sstream>
#include<set>
using namespace std;
typedef pair<int, int> PAIR;
bool cmp_by_value(const PAIR& lhs, const PAIR& rhs){
    return lhs.second < rhs.second;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<PAIR> per;
    for(int i = 0; i < n ; i++){
        int nums;
        cin >> nums;
        per.push_back({i,nums});
    }
    vector<PAIR> per_tmp(per.begin(), per.end());
    auto iter = per_tmp.begin();
    while(k--){    
        sort(per.begin(), per.end(), cmp_by_value);
        cout << per.begin()->first+1 << endl;
        per.begin()->second += (iter+per.begin()->first)->second;
    }
}
