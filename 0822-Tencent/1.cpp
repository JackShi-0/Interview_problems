#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    string ans = "";
    int len = str.length();
    char max;
    int max_position = -1;
    for (int i = 0; i < k; i++){
        max = CHAR_MIN;
        for (int j = max_position+1; j < len - k +1+i; j++){
            if(str[j] > max){
                max = str[j];
                max_position = j;
            }
        }
        ans = ans + max;
    }
    cout << ans;
}