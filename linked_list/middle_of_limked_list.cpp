// O(N) TIMECOMPLEXITY AND O(1) SPACE COMPLEXITY
#include<iostream>
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
    ListNode* middleNode(ListNode* head) {
        float sum=0;
        ListNode* temp = head;
        while(temp->next !=nullptr){
            temp = temp->next;
            sum++;
        }
        temp=head;
        int mid;
        mid = ceil((sum+1)/2);
        if(((int)sum)%2!=0)
        {
            mid++;
        }
        for(int i=1;i<mid;i++){
            temp = temp->next;
        }
        return temp;
    }
};