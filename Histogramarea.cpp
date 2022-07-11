#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Solution {
public:
  
int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        auto nse = nextSmallestElement(heights, n);
        auto pse = prevSmallestElement(heights, n);
        int mxHeight = 0;
        for (int i = 0;i < n;i++) {
            int currHeight = (nse[i] - pse[i] - 1) * heights[i];
            mxHeight = max(mxHeight, currHeight);
        }
        return mxHeight;
    }
private:
    vector<int> nextSmallestElement(vector<int> &arr, int n) {
        stack<int> st;
        vector<int> vec;
        vec.push_back(n);
        st.push(n - 1);
        for (int i = n - 2;i >= 0;i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) vec.push_back(n);
            else vec.push_back(st.top());
            st.push(i);
        }
        reverse(vec.begin(), vec.end());
        return vec;
        
    }
    vector<int> prevSmallestElement(vector<int> &arr, int n) {
        stack<int> st;
        vector<int> vec;
        st.push(0);
        vec.push_back(-1);
        for (int i = 1;i < n;i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if (st.empty()) vec.push_back(-1);
            else vec.push_back(st.top());
            st.push(i);
        }
        return vec;
    }
};

