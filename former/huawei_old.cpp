#include<iostream>
#include<cstdio>
#include<cstdio>
#include<cstring>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<string>
#include<sstream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
int num[30]={0};

struct Node{
    int idx;
    int score;
    Node(int idx_,int score_){
        idx=idx_;
        score=score_;
    }
};

static bool cmp(Node &a, Node &b){
    if(a.score==b.score) return a.idx<b.idx;
    return a.score>b.score;
}
int main(){
	string s;
	while(getline(cin,s)){
        if(s[0] =='\0') break;///遇空行结束
        int idx_a=s[0]-'a';
        int idx_b=s[2]-'a';
        int score_a=s[4]-'0';
        int score_b=s[6]-'0';
        if(score_a>score_b){
            num[idx_a]+=3;
        }
        else if(score_a==score_b){
            num[idx_a]+=1;
            num[idx_b]+=1;
        }
        else{
            num[idx_b]+=3;
        }
	}
	vector<Node> ans;

	for(int i='a';i<='z';i++){
        if(num[i-'a']){
            ans.push_back(Node(i-'a',num[i-'a']));
        }
	}

	sort(ans.begin(),ans.end(),cmp);
	for(int i=0;i<(int)ans.size();i++){
        if(i==0) {
            printf("%c %d",ans[i].idx+'a',ans[i].score);
        }
        else{
            printf(",%c %d",ans[i].idx+'a',ans[i].score);
        }
	}
	printf("\n");
	return 0;
}