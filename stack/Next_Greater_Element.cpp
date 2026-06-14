// O(N) TIME COMPLEXITY AND O(N) SPACE COMPLEXITY
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> a(n,-1);
        stack<int> s;
        stack<int> s1;
        for(int i=0;i<n;i++){
            s=s1;
            int k=-1;
            for(int j=0;j<(nums2.size());j++){
                if(nums1[i]==nums2[j]){
                    k=j;
                }
            }
            if (k!=-1){
                s.push(nums2[k]);
                for(k;k<(nums2.size());k++){
                    while(!s.empty() && nums2[k]>s.top()){
                        s.pop();
                    }
                    if(s.empty()){
                        a[i] = nums2[k];
                        break;
                    }
                }
            }
        }
        return a;
    }
};