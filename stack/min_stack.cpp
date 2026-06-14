// O(1) TIME COMPLEXITY AND O(N) SPACE COMPLEXITY
#include <iostream>
using namespace std;
#include<vector>
class MinStack {
public:
    vector<int> vect;
    vector<int> minval;
    MinStack() {
    }
    void push(int val) {
        if(vect.size() == 0){
            vect.push_back(val);
            minval.push_back(val);
        }
        else{
            if(val<=minval[minval.size()-1]){
                minval.push_back(val);
            }
            vect.push_back(val);
        }
        
    }
    
    void pop() {
        if (vect.size() != 0){
            int p = vect.back();
            vect.pop_back();
            if (p == minval[minval.size()-1]){
                minval.pop_back();
            }
        }
    }
    
    int top() {
        return vect.back();
    }
    
    int getMin() {
         if (minval.size()!=0){
            return minval.back();
         }
         return 0;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */