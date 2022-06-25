 #include<iostream>
 #include<bits/stdc++.h>
 #include<vector>
 #include<string>
using namespace std;

bool isNumber(string s)
{
    if (isInteger(s) or isDecimal(s))
        return true;

    vector<string> tokens = split(s, 'e');
    if (tokens.size() == 2)
        return (isInteger(tokens[0]) or isDecimal(tokens[0])) and isInteger(tokens[1]);

    tokens = split(s, 'E');
    if (tokens.size() == 2)
        return (isInteger(tokens[0]) or isDecimal(tokens[0])) and isInteger(tokens[1]);

    return false;
    }
    

    bool isInteger(string s) {
        if(s.empty())
            return false;
        
        if(s.front() == '+' or s.front() == '-')
            s = s.substr(1);
        
        return hasOneOrMoreDigits(s);
    }
    
    bool isDecimal(string s) {
        if(s.empty())
            return false;
        
        if(s.front() == '+' or s.front() == '-')
            s = s.substr(1);

        vector<string> tokens = split(s, '.');
        if(tokens.size() != 2)
            return false;
        
        string left_side = tokens[0];
        string right_side = tokens[1];
        
        if(hasOneOrMoreDigits(left_side) and right_side.empty())
            return true;

        if(hasOneOrMoreDigits(left_side) and hasOneOrMoreDigits(right_side))
            return true;

        if(left_side.empty() and hasOneOrMoreDigits(right_side))
            return true;

        return false;
    }

    bool hasOneOrMoreDigits(string s){
        if(s.empty())
            return false;

        for(char c: s){
            if(!isDigit(c))
                return false;
        }
        
        return true;
            
    }

    bool isDigit(char c){
        return c >= '0' and c <= '9';
    }
    
    vector<string> split(string s, char sep){
        stringstream ss(s + sep);
        vector<string> response;
        
        string token;        
        while(getline(ss, token, sep)){
            response.emplace_back(token);
        }
        
        return response;
    }

    