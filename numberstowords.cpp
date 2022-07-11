  #include<iostream>
 #include<bits/stdc++.h>
 #include<vector>
 #include<string>
using namespace std;
 string numberToWords(int num)
    {
         string word[] = { "Zero", "One", "Two", "Three", "Four",
                            "Five", "Six", "Seven", "Eight", "Nine",
                            "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                            "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
        string word10[] = { "None", "Ten", "Twenty", "Thirty", "Forty",
                            "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
        string wordBig[] = { "Thousand", "Million", "Billion" };
        string result = "";
        
        if (num >= 1000000000)
        {
            result += numberToWords(num / 1000000000) + " " + "Billion" + " ";
            num %= 1000000000;
        }
        if (num >= 1000000)
        {
            result += numberToWords(num / 1000000) + " " + "Million" + " ";
            num %= 1000000;
        }
        if (num >= 1000)
        {
            result += numberToWords(num / 1000) + " " + "Thousand" + " ";
            num %= 1000;
        }
        if (num >= 100)
        {
            result += word[num / 100] + " " + "Hundred" + " ";
            num %= 100;
        }
        if (num >= 20)
        {
            result += word10[num / 10] + " ";
            num %= 10;
        }
        if (num == 0) { 
            if (result == "")
                return word[0];
        }
        else result += word[num] + " ";
        result.pop_back();
        return result;
    }