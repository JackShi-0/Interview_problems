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

int maxsubarraywithk(vector<int>& nums, int k){
    int n = nums.size();
    unordered_map<int, int> m;
    m[0] = 0;
    int sum = 0;
    int max_len = 0;
    
    
    for(int i=0; i<n;i++){
        sum += nums[i];
        if(!m.count(sum)){
           m[sum]=i+1;
        }
        if(m.count(sum-k)){
            max_len = max(max_len, i + 1 - m[sum - k]);
        }
    }
    return max_len;
}

int main(){
    int k = 3;
    vector<int> input={1, -1, 5, -2, 3};
    cout << maxsubarraywithk(input, k)<<endl;

    int k1 = 1;
    vector<int> input1={-2, -1, 2, 1};
    cout << maxsubarraywithk(input1, k1);
}