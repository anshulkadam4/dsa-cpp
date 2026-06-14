// O(N) TIME COMPLEXITY AND O(1) SPACE COMPLEXITY
#include <iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ptr1 = list1;
        ListNode *ptr2 = list2;
        ListNode *temp = new ListNode;
        ListNode *t1 = temp;
        while(ptr1 && ptr2){
            ListNode *fin = new ListNode;
            if((ptr1->val) > (ptr2->val)){
                fin->val = (ptr2->val);
                ptr2 = ptr2->next;
                temp->next = fin;
                temp=temp->next;
            }
            else{
                fin->val = (ptr1->val);
                ptr1=(ptr1->next);
                temp->next = fin;
                temp=temp->next;
            }
        }
        if (ptr1){
            while(ptr1){
            ListNode *fin = new ListNode;
            fin->val = (ptr1->val);
            ptr1=ptr1->next;
            temp->next = fin;
            temp=temp->next;
            }
        }
        if (ptr2){
            while(ptr2){
            ListNode *fin = new ListNode;
            fin->val = (ptr2->val);
            ptr2=ptr2->next;
            temp->next = fin;
            temp=temp->next;
            }
        }
        return t1->next;
    }
};