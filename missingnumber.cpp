#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
int missingNumber(vector<int>& nums) 
    {
        int n  = nums.size();
        int sum = 0;
        int original = n*(n+1)/2;
        
        for(int i = 0;i<n;i++)
        {
            sum = sum + nums[i];
        }
        int result = original - sum;
        
        return result;
    }