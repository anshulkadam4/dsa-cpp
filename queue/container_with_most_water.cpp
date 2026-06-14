// Time Complexity: O(n)
// Space Complexity: O(1)
#include<iostream>
#include<vector>
#include<stack>
#include<deque>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int area;
        int ma=0;
        int i=height.size()-1,j=0;
                while(j!=i){
                    area = abs(i-j)*min(height[i],height[j]);
                    if(area>ma){
                        ma= area;
                    }
                    if(height[i]>height[j]){
                        j++;
                    }
                    else{
                        i--;
                    }
                }
        return ma;
    }
};