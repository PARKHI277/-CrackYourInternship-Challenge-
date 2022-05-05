#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

/*Given an array nums with n objects colored red, white, or blue, 
sort them in-place so that objects of the same color are adjacent, 
with the colors in the order red, white, and blue.*/

void sortColors(vector<int> nums)
    {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<int>result;
        for(int i = 0;i<n;i++)
        {
            result.push_back(nums[i]);
        }
        nums = result;
    }


int main()
{
    int n ;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    sortColors(arr);
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}