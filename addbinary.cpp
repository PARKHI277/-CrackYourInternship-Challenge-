#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string addBinary(string a, string b) 
    {   
        string ans="";
        int n = a.length()-1, m = b.length()-1;
        
        int carry = 0;
        int i = 0;
        while(i<=n || i<=m){
            int temp =0;
            
            char x = '0';
            char y = '0';    
            
            if(n-i>=0)
                x = a[n-i];
            
            if(m-i>=0)
                y = b[m-i];
            
            if(x=='1')
                temp++;
            if(y=='1')
                temp++;
            if(carry==1)
                temp++;
            
           if(temp==3){
               ans = '1'+ans;
           }
            else if(temp == 2){
                ans ='0'+ans;
                carry = 1;
            }
            else if(temp == 1){
                ans ='1'+ans;
                carry = 0;
            }
            else{
                ans ='0'+ans;
                carry = 0;
            }
                
            i++;
        }
        if(carry)
            ans ='1' + ans;
        return ans;
}

int main()
{
    string a = "11";
    string b =  "1";

    string result = addBinary(a, b);
    cout << result << endl;
}
