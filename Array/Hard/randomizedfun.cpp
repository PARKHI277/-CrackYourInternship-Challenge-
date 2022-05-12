#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class RandomizedCollection {
public:
    unordered_map<int,unordered_set<int>>mp;
    vector<int>v;
    RandomizedCollection() 
    {
        mp.clear();
        v.clear();
    }
    
    bool insert(int val)
    {
        bool flag = 0;
        if(!mp[val].size())
        {
            flag = 1;
        }
        mp[val].insert(v.size());
        v.push_back(val);
        return flag;
    }
    
    bool remove(int val)
    {
        if(!mp[val].size())
            return 0;
        int k = *mp[val].begin();
        mp[val].erase(k);
        
        if(mp[v[v.size()-1]].size())
        {
            int l = v[v.size() - 1];
            mp[1].erase(v.size()-1);
            mp[1].insert(k);
            swap(v[k],v[v.size()-1]);
        }
        
        v.pop_back();
        return 1;
    }
    
    int getRandom()
    {
        return v[rand()%v.size()];
    }
};



    
    
   
    
    
    
    
    