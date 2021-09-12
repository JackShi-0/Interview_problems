#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N, M, K;
        cin >> N >> M >> K;
        vector<int> nums(N);
        for (int i = 0; i < N;i++){
            int n;
            cin >> n;
            nums[i] = n;
        }
        int i = 0;
        while(M>0){
            nums[i] = max(0, nums[i] - K);
            if(i==0){
                i += 1;
            }else if(i==N-1){
                i -= 1;
            }else if(nums[i-1]>nums[i+1]){
                i = i - 1;
            }else{
                i = i + 1;
            }
            M -= 1;
        }
        auto maxindex = max_element(nums.begin(), nums.end());
        cout << *maxindex;
    }
}