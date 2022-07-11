 bool isPowerOfTwo(int n)
    {
        if(n==1)
            return true;
        if(n<=0 || n%2!=0)
           return false;
        else
        { 
            int flag=0;
            while(n!=0)
            {
               n=n/2;
              if(n%2==0 && flag==0)
              {
                continue;
              }
             else if(n%2==1 && flag==0)
             {
               flag=1;
               continue;
             }
             else if(n%2==1 && flag==1)
            {
              return false;
            }
          }
       }

    return true;
    }
    