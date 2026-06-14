// O(N) TIME COMPLEXITY AND O(N) SPACE COMPLEXITY
#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string i:tokens)
            if(i=="+" || i=="-" || i== "/" || i=="*"){
                int a =s.top();
                s.pop();
                int b = s.top();
                s.pop();
                    if (i== "+"){
                        s.push(b+a);}
                    if (i== "-"){
                        s.push(b-a);}
                    if (i== "*"){
                        s.push(b*a);}
                    if (i== "/"){
                        s.push(b/a);}
            }
            else{
                int q = stoi(i);
                s.push(q);
            }
        int q = s.top();
        return q;
        }
};