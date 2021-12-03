#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  /**
   * Note: 类名、方法名、参数名已经指定，请勿修改
   *
   *
   * 给定两个无序数组arr1和arr2，返回一个新的数组arr3，arr3里面的元素同时出现在arr1和arr2里面，而且要求arr3是正序的并且不包含重复值。
   * @param arr1 int整型vector 无序数组1
   * @param arr2 int整型vector 无序数组2
   * @return int整型vector
   */
  vector<int> findUniqueCommon(vector<int>& arr1, vector<int>& arr2) {
    // write code here
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int len1 = arr1.size(), len2 = arr2.size();
    int index1 = 0, index2 = 0;
    vector<int> interSection;
    while (index1 < len1 && index2 < len2) {
      int num1 = arr1[index1], num2 = arr2[index2];
      if (num1 == num2) {
        if (!interSection.size() || num1 != interSection.back()) {
          interSection.push_back(num1);
        }
        index1++;
        index2++;
      } else if (num1 < num2) {
        index1++;
      } else {
        index2++;
      }
    }
    return interSection;
  }
};