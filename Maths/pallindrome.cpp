 bool isPalindrome(int x) 
    {
        int rem ;
        int rev = 0;
        int original = x;
        
        while(x>0)
        {
            rem = x%10;
            rev = rev*10 + rem;
            x = x/10;
        }
        
        if(original == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }