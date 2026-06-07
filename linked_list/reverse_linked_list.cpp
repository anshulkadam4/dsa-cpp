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
    ListNode* reverseList(ListNode* head) {
    if (!head) return nullptr;
    ListNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    ListNode* neww = head;
    ListNode* nice = temp;
    while(temp!=head){
        while(neww->next != temp){
            neww=neww->next;
        }
        temp->next = neww;
        temp = neww;
        neww=head;
    }
    neww->next=nullptr;
    
    return nice;
}

};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* reversedHead = sol.reverseList(head);

    // Print the reversed linked list
    ListNode* temp = reversedHead;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}