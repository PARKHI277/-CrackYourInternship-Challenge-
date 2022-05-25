#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        
        int ans = 0;
        sort(nums.begin(),nums.end());
        int a = 0;
        int prev = 0;
        for(int i = 1;i<nums.size();i++)
        {
            ans =  ans + nums[i] + prev - nums[i-1];
            prev = nums[i] + prev - nums[i-1];
        }
        
        return ans;
        
    }
};