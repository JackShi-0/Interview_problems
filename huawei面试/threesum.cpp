// #include<bits/stdc++.h>
// using namespace std;
// vector<int> twoSum(vector<int> &nums, int target){
//         unordered_map<int, int> hashtable;
//         for(int i=0; i<nums.size(); i++){
//             auto it = hashtable.find(target-nums[i]);
//             if(it != hashtable.end()){
//                 return{it->first,nums[i]};
//                 }
//                 hashtable[nums[i]]=i;
//         }
//         return{};
// }
// int main(){
//     vector<int> input = {2, 7, 11, 15};
//     vector<int> result = twoSum(input , 9);
//     int len = result.size();
//     for (int i = 0; i < len; i++){
//         cout << result[i] << " ";
//     }
// }

#include <iostream>
using namespace std;
class A {
 public:
  virtual void F() { cout << 1 << endl; }
  void CallF() { F(); }
  virtual ~A() {
    CallF();
    F();
  }
};

class B : public A {
 public:
  void F() { cout << 2 << endl; }
  ~B() {}
};

class C : public B {
 public:
  void F() { cout << 3 << endl; }
  void CallF() {
    F();
    A::CallF();
  }
  ~C() { CallF(); }
};

int main() {
  A* p = new C();
  p->CallF();
  delete p;
  return 0;
}
