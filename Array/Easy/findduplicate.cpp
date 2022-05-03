#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 int findDuplicate(vector<int>nums) 
    {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++) 
           mp[nums[i]]++;  
        for(auto m:mp){
            if(m.second > 1) return m.first;
        }
        return 0;
        
    }

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate Element in it ";
    cout << findDuplicate(arr);
}