#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
 public:
  ListNode* deleteZeroTree(ListNode* head) {
    ListNode* current = head;
    int temp = 0;
    ListNode* tempNode = new ListNode(-1);
    while (current->next) {
      if (current->val != -temp) {
        temp += current->val;
        current = current->next;
      } else {
        tempNode->next = current->next;
        if (current->next->next->val > 0) {
          tempNode = current->next->next;
        } else {
          current = head;
          temp = 0;
          tempNode = new ListNode(-1);
        }
      }
    }
    return head;
  }
};