#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> num(2*N);
    for(int i=0; i<2*N; i=i+2){
        cin >> num[i];
    }
    for(int i=1; i<2*N; i=i+2){
        cin >> num[i];
    }
    for(int i=0; i < 2*N; i++){
        cout << num[i];
    }
    unordered_map<int, int> hash;
    int A = 0;
    int B = 0;
    for(int j=0; j<2*N ;j++){
        auto it = hash.find(num[j]);
        if(it != hash.end() && it->second != INT16_MAX){
            int position = it->second;
            for (int i = position; i <= j; i++){
                hash[num[i]] = INT16_MAX;
                num[i] = 0;

            }
            if(j%2==0){
                A += (j-position+1);
            }else{
                B += (j-position+1);
            }
        }else{
            hash[num[j]] = j;
        }

    }
    for (int i = 0; i < 2 * N; i++)
    {
        if (num[i] != 0)
        {
            if (num[i] % 2 == 0)
            {
                B++;
            }
            else
            {
                A++;
            }
        }
    }
    cout << A << B;
}