#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    
    void pushs(string &s , stack<int>&st)
    {
        for(auto &e : s)
        {
            if(!st.empty() && e == '#')
            {
                st.pop();
            }
            else if(e == '#')
                continue;
            else 
                st.push(e);
        }
    }
    
    string solve(string &s , stack<int>&st)
    {
        while(!st.empty())
        {
            char ch = st.top();
            s = ch+s;
            st.pop();
        }
        return s;
    }
    bool backspaceCompare(string s, string t) {
        string ans1 = "";
        string ans2 = "";
        stack<int>st;
        pushs(s,st);
       ans1 = solve(ans1, st);
        pushs(t, st);
        ans2 = solve(ans2, st);
        return ans1 == ans2;
    }
};