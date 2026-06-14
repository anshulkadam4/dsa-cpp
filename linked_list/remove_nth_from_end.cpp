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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return head;
        }
        
        ListNode* temp = head;
        ListNode* curr = head;
        ListNode *prev = head;
        
        int sum=0;
        while(temp){
            temp=temp->next;
            sum++;
        }
        if (n == sum) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        sum=sum-n;
        for(int t=0;t<sum;t++){
            if(curr->next == nullptr){
                return head;
            }
            curr=curr->next;
        }
        for(int t=0;t<(sum-1);t++){
            if(prev->next == nullptr){
                return head;
            }
            prev=prev->next;
        }
        prev->next = curr->next;
        curr->next=nullptr;

        delete curr;
        return head;
    }
};