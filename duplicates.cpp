#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int>v;
        
        for(int i = 0;i<n;i++)
        {
            int pos = abs(nums[i]) -1 ;
            if(nums[pos]<0)
            {
                v.push_back(pos+1);
            }
            nums[pos] = nums[pos]*-1;
        }
        
        return v;
    }
};
