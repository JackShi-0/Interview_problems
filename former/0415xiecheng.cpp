#include<cstring>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<string>
#include<sstream>
#include<set>
#include<iostream>
using namespace std;
int main(){
    string stmp;
    int itmp;
    vector<int> nums;
    cin >> stmp;
    // stmp = stmp.substr(1, stmp.size() - 2);
    replace(stmp.begin(),stmp.end(),'[',' ');
    replace(stmp.begin(),stmp.end(),']',' ');
    replace(stmp.begin(),stmp.end(),',',' ');
    stringstream ss;
    ss << stmp;
    while(ss >> itmp){
     nums.push_back(itmp);
    }
    ss.clear();
    
    int res = INT_MIN;
    int n = nums.size();
    int pre = 0;
    int left = 0, right = 0;
    for(int i=0;i<n; i++){
        if(pre+nums[i]>nums[i]){
            pre = pre + nums[i];
        }else{
            pre = nums[i];
            left = i;
        }
        if(pre > res){
            res = pre;
            right = i;
        }else{
            res = res;
        }
    }
    cout << '['<< left << ','<< right << ']';
    
    // for (int i = 0; i < nums.size();i++){
    //     cout << nums[i] << " ";
    // }
}

// [-2,1,-3,4,-1,2,1,-5,4]      
// [3,6]