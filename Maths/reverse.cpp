#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
int reverse(int x) 
    {
        int flag = 0;
        int rev = 0;
        if(x<0)
        {
            if( x <= INT_MIN)
            {
                return 0;
            }
            
            x = x*-1;
            flag = 1;
        }
        
       
        while(x>=1)
        {
            
             if( rev > INT_MAX/10 )
            {
                return 0;
            }
            
            rev = rev*10 + x%10;
            
            x/=10;
        }
            

            if(flag==1){
                
                rev*=-1;
                return rev;
                
            }else{
                
                return rev;
                
            }
            
    }