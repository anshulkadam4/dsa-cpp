#include<iostream>
#include<vector>
#include<stack>
#include<deque>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stack<int> s;
        deque<int> dq;
        int f,t,m=0;
        for(int i: nums){
            dq.push_back(i);
        }
        while(m != nums.size()){
            if(dq.front()==0){
                dq.push_back(0);
                dq.pop_front();
                m++;
            }
            else{
                f = dq.front();
                s.push(f);
                dq.pop_front();
                m++;
            }
        }
        while(!s.empty()){
            t = s.top();
            dq.push_front(t);
            s.pop();
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = dq.front();
            dq.pop_front();
        }
}
};