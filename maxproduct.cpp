  #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
  int maxProduct(vector<int>& nums) 
    {
        int current_product = 1;
        int max_product = INT_MIN;
        for(int i = 0;i<nums.size();i++)
        {
            current_product *= nums[i];
            max_product = max(current_product,max_product);
            
            if(current_product == 0)
            {
                current_product =  1;
            }
        }
        
        current_product = 1;
        for(int i = nums.size()-1;i>=0;i--)
        {
            current_product *= nums[i];
            max_product = max(current_product,max_product);
            if(current_product == 0)
            {
                current_product = 1;
            }
        }
        
        return max_product;
    }