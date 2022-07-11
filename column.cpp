#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
 string convertToTitle(int columnNumber) {
        string ans="";
        int reminder;
        while(columnNumber){
            reminder = columnNumber%26;
            if(reminder==0){
                reminder = 26;
            }
            char c = 64+reminder;
            ans =  c+ans;
            columnNumber = (columnNumber-reminder )/26;
        }
        return ans;
    }