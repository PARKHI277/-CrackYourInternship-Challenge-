 bool isHappy(int n) {
        if(n==1||n==7)
            return true;
        if(n<10)
            return false;
        int temp=0;
        while(n){
            temp+=(n%10)*(n%10);
            n/=10;
        }
        return isHappy(temp);
    }