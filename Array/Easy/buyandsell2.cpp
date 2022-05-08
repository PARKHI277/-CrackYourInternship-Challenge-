#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findsellbuy(int prices[],int n)
{
    int profit = 0;
    for (int i = 0; i <n;i++)
    {
       if(prices[i+1] > prices[i])
       {
           profit = profit + prices[i + 1] - prices[i];
       }
    }

    return profit;
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