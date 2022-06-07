 #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#include<stack>
#include<map>

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
       vector<int>ans;
       
        unordered_map<int,int>mp;
        stack<int>s;
        for(int i=nums2.size()-1;i>=0;i--){
            int currVal = nums2[i];
            
            while(!s.empty()&&s.top()<currVal)
                s.pop();
            mp[nums2[i]]=s.empty()?-1:s.top();
            s.push(currVal);
        }
        for(int element:nums1){
            ans.push_back(mp[element]);
        }
        return ans;
    }
};