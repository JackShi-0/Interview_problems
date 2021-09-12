#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    vector<int> N;
    while(T--){
        int n;
        cin >> n;
        N.push_back(n);
    }
    
    for (int i = 0; i < (int)N.size(); i++){
        vector<int> ans;
        int index = 0;
        int num = N[i];
        while(num > 0){
            if(num % 2 != 0){
                ans.push_back(index);
                num = num - 1;
            }
            num = num / 2;
            index += 1;
        }
        cout << index << endl;
        
        // for (int j = 0; j < (int)ans.size()-1; j++){
        //     cout << index - ans[j] << " "  ;
        // }
        // cout << index - ans[(int)ans.size() - 1] << endl;
        for (int j = (int)ans.size()-1; j >= 0; j--){
            cout << index - ans[j] << " "  ;
        }
        cout << endl;

    }
    
}
///2 3 5  //2 1 2  3 1 3 
// 1 2    //2 1
