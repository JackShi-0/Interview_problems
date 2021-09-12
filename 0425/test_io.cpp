
#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){	
	// string str1 = "/d2/d4/f1";
	// string str2 = "/d1/../../d2";
	// string str3 = " hello world hcq!";
	// string dir;
	// string dir_list[50];
	// int i=0;
	
	// stringstream ss(str3);
	// while(getline(ss, dir, ' ')){
	// 	dir_list[i] = dir;
	// 	cout<<dir_list[i]<<endl;
	// 	i++;
	// }
	
	// return 0;
	int n = 1;
	string s;
	vector<int> str;
	while(getline(cin,s) && n--){
		string b;
		stringstream a(s);
		while(getline(a,b,','))
			str.push_back(stoi(b));
		sort(str.begin(), str.end());
		cout << str[0];
		int n = str.size();
		for (int i = 1; i < n;i++){
			cout << ',' << str[i];
		}
		cout << endl;
		str.clear();
	}
	return 0;
}

