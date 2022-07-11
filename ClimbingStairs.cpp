#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int dp[46] = {};
int climbing(int n)
{
    if(n == 1)
    {
        dp[n] = 1;
        return dp[n];
    }
    if(n==2)
    {
        dp[n] = 2;
        return dp[n];
    }
    else if(dp[n] != 0)
    {
        return dp[n];
    }
    dp[n] = climbing(n - 1) + climbing(n - 2);
        return dp[n];

}
int main()
{
    int n;
    cin >> n;
    cout << climbing(n) << endl;
}