#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int findsellbuy(int prices[],int n)
{
    int minm = prices[0];
        int maxm = 0;
        for(int i = 0;i<n;i++)
        {
            if(prices[i]>minm)
            {
                maxm = max(maxm,prices[i]- minm);
                
            }
            else
            {
                 minm=prices[i];
            }
        }
        return maxm;
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
    cout << findsellbuy(arr, n) << endl;
}