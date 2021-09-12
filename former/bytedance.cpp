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
string longestsubstring(string s){
    int len = s.size();
    int maxlen = 0;
    int start = 0, end=1;
    int left,right;
    if(len<2) return s;
    
    while(end < len){
    	int st = start;
        for(int i = st; i<end; i++){
        	if(s[i]==s[end]){start=i+1;break;}
        }
        end++;
        if(end-start > maxlen){ 
           maxlen = end - start;
           left = start;
           right = end;
        }
    }
    
    string ans = s.substr(left,right);
    return ans;
}
