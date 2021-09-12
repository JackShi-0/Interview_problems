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
bool judge(string& s1, string& s2);
bool getans(string& s1, string& s2);
int main(){
    int t;
    cin >> t;
    vector<bool> ans;
    while(t--){
        string str1;
        string str2;
        cin >> str1;
        cin >> str2;
        ans.push_back(getans(str1, str2));
    }
    int ans_len = ans.size();
    for (int i = 0; i < ans_len-1;i++){
        if(ans[i]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    if(ans[ans_len-1]){
        cout << "YES";
    }else{
        cout << "NO" ;
    }
    
}
bool getans(string& s1, string& s2){
    int n = s1.size();
    // if(n%2!=0){
    //     return judge(s1, s2);
    // }
    if(judge(s1, s2)){
        return true;
    }
    bool ans = false;
    if(n%2==0){
        string s1_1 = s1.substr(0, n / 2);
        string s1_2 = s1.substr(n / 2, n / 2);
        string s2_1 = s2.substr(0, n / 2);
        string s2_2 = s2.substr(n / 2, n / 2);
        ans = (getans(s1_1, s2_1)&&getans(s1_2, s2_2)) || (getans(s1_1, s2_2)&&getans(s1_2, s2_1));
    }
    return ans;
}

bool judge(string& s1,string& s2){
    int len = s1.size();
    for (int i = 0; i < len; i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}