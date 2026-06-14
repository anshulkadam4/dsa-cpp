/* Time Complexity:
push()  -> O(1)
pop()   -> O(n)
peek()  -> O(n)
empty() -> O(1)

Space Complexity:
O(n)
*/
#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
            int temp = s1.top();
            s2.push(temp);
            s1.pop();
        }
        int t = s2.top();
        s2.pop();
        while(!s2.empty()){
            int temp = s2.top();
            s1.push(temp);
            s2.pop();
        }
        return t;
    }
    
    int peek() {
        while(!s1.empty()){
            int temp = s1.top();
            s2.push(temp);
            s1.pop();
        }
        int t = s2.top();
        while(!s2.empty()){
            int temp = s2.top();
            s1.push(temp);
            s2.pop();
        }
        return t;
    }
    
    bool empty() {
        return (s1.empty() ? true:false);
    }
};
