#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<vector>

int maxPoints(vector<vector<int>>& points) 
    {
         int n = points.size();
        ,
        if(n == 1)
            return 1;
        
        int maxi = 0;
        
        for(int i = 0; i < n; i++)
        {
            unordered_map<long double, int> mp;
            
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                {
                    continue;
                }
                
                long double diff_y = points[j][1] - points[i][1];
            
                long double diff_x = points[j][0] - points[i][0];
                
                long double slope;
            
                if(diff_x == 0)
                {
                    slope = 1e9;
                }
                else
                {
                    slope = diff_y / diff_x;
                }

                mp[slope]++;
                
                maxi = max(maxi, mp[slope]);
            }
        }
        
        return maxi + 1;
    }