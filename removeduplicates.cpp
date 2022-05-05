#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>

int removeduplicate(vector<int>nums) 
    {
        int j = 0;
        int count  =  1;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] != nums[i-1])
            {
                count++;
                j++;
                nums[j] = nums[i];
            }
        }
        return count;
    }

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    int k = removeduplicate(arr);
    cout << k << endl;
}