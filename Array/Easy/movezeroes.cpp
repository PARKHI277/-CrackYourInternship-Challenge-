#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void setzero(int arr[],int n)
{
         
        int zero = 0;
        for(int i = 0;i<n;i++)
        {   
            if(arr[i] == 0)
            {
                zero++;
            }
                
        }
        vector<int>ans;
        for(int i = 0;i<n;i++)
        {
            if(arr[i] != 0 )
            {
                ans.push_back(arr[i]);
            }
        }
        while(zero--)
        {
            ans.push_back(0);
        }
        
        for(int i = 0;i<n;i++)
        {
            arr[i] = ans[i];
        }
        
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    setzero(arr,n);
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}