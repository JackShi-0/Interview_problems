#include<bits/stdc++.h>
using namespace std;
// int main(){
//     // int k;
//     // cin >> k;
//     // int length;
//     // cin >> length;
//     // vector<int> n;
//     // int nval;
//     // for(int i=0 ;i<length ; i++){
//     //     cin >> nval;
//     //     n.push_back(nval);
//     // }
//     // int time;
//     // vector<vector<int>> times(k,vector<int>(length,0));
//     // for(int i=0 ; i< k ;i++){
//     //     for(int j=0 ; j<length; j++){
//     //         cin >> time;
//     //         times[i][j] = time;
//     //     }
//     // }
    
//     // int col = times[0].size();
//     // int row = times.size();
//     // int res = INT_MAX;
//     // for(int i=0;i<col; i++){
//     //     priority_queue<int,vector<int>,greater<int>> heap;
//     //     for(int j=0; j<row; j++){
//     //         heap.push(times[j][i]);
//     //     }
//     //     int num = n[i];
//     //     int total =0;
//     //     while(num!=0 && num <= row){
//     //         total += heap.top();
//     //         heap.pop();
//     //         if(total>res)
//     //             break;
//     //     }
//     //     res = min(total,res);
//     // }
//     // cout << res;

//     // int k;
//     // vector<int> m;
//     // int len1;
//     // cin >> len1;

//     // while(len1-- && cin>>k){
//     //     m.push_back(k);
//     // }
//     // int len = m.size();
//     // for (int i = 0; i < len;i++){
//     //     cout << m[i] << ' ';
//     // }


// }

typedef pair<string, int> PAIR;
 
bool cmp_by_value(const PAIR& lhs, const PAIR& rhs) {
  return lhs.second < rhs.second;
}
 
struct CmpByValue {
  bool operator()(const PAIR& lhs, const PAIR& rhs) {
    return lhs.second < rhs.second;
  }
};

ostream& operator<<(ostream& out, const PAIR& p) {
  return out << p.first << "\t" << p.second;
}

int main() {
  map<string, int> name_score_map;
  name_score_map["LiMin"] = 90;
  name_score_map["ZiLinMi"] = 79;
  name_score_map["BoB"] = 92;
  name_score_map.insert(make_pair("Bing",99));
  name_score_map.insert(make_pair("Albert",86));
 //把map中元素转存到vector中 
  vector<PAIR> name_score_vec(name_score_map.begin(), name_score_map.end());
  sort(name_score_vec.begin(), name_score_vec.end(), CmpByValue());
 // sort(name_score_vec.begin(), name_score_vec.end(), cmp_by_value);
  for (int i = 0; i != name_score_vec.size(); ++i) {
    cout << name_score_vec[i] << endl;
  }
  return 0;
}
