#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

// O(n) complexity

 int twoSum(int nums[], int target,int n) 
    {   
        map<int,int>m;
        for (int i = 0;i<n; i++)
        {
            if(m.find(target-nums[i])!= m.end())
            {
                 return {i,m[target-nums[i]]};
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return {};
    }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int target;
    cin >> target;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    cout << twoSum(arr, target,n) << endl;
}