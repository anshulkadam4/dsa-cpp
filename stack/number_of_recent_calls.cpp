#include <iostream>
#include <queue>
using namespace std;

class RecentCounter {
    queue<int> q1;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q1.push(t);
        int sum=0;
        int x = t-3000;
        while(!q1.empty() && q1.front()<x){
            q1.pop();
        }
        return q1.size();
    }
};
