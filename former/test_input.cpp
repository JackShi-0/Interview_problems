#include <iostream>
#include <iostream>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string n;
    int a,b;
    getline(cin,n,',');
    cin>>a;
    if(cin.get()==',' )
    cin>>b;
    cout<<n<<","<<a<<","<<b<<endl;
    return 0;
}
// ————————————————
// 版权声明：本文为CSDN博主「Stop_And_Go」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// 原文链接：https://blog.csdn.net/Stop_And_Go/article/details/71433944


// int main(){
//     int times;
//     cin >> times;
//     int x;
//     vector<int> A;
//     while(cin >> x){
//     	//直接接收第一个字符作为需要判断的 
//         A.push_back(x);
//         if(cin.get()=='\n'){
// 			break;
// 		}        
// 		else {
// 			getchar();
// 		}
//     }
//     int len = A.size();
//     for(int i=0;i<len;i++){
//         cout<<A[i]<<" ";
//     }
//     // vector<vector<int> > vv={{1,2},{1,2}};
//     // vector<int> tmp(vv[0].begin(),vv[0].end());
//     // for(int t : tmp){
//     //     cout << t << " ";
//     // }

// }//1 ,2 ,3 ,1 ,2 ,3 ,4
// // ————————————————
// // 版权声明：本文为CSDN博主「夏虫不可语冰也」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// // 原文链接：https://blog.csdn.net/weixin_43616215/article/details/114942948