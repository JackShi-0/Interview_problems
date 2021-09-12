#include<bits/stdc++.h>
using namespace std;
string getans(vector<int>& input);
int main(){
    int T;
    cin >> T;
    vector<string> ans;
    while(T--){
        int n;
        cin >> n;
        vector<int> input;
        int num;
        while(n--){
            cin >> num;
            input.push_back(num);
        }
        ans.push_back(getans(input));
    }
    int len = ans.size();
    for (int i = 0; i < len; i++)
    {
        cout << ans[i] << endl;
    }
}
string getans(vector<int>& input){
        int len = input.size();
        for(int i=0;i<len-2;i++){
            for(int j=i+1; j<len-1; j++){
                if(input[i]>input[j]){
                    for(int k=j+1; k<len; k++){
                        if(input[k]>input[j] && input[i]>input[k]){
                            return "Yes";
                        }
                    }
                }
            }
        }
        return "No";
}
