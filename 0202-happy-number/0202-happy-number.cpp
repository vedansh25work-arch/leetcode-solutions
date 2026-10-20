class Solution {
public:
    bool isHappy(int n) {
        if(n==7 ) return true ;
        if(n<10 && n!=1 ) return false ;
       while(n>=10){
        int sum =0;
        while(n>0){
            int d = n%10;
            sum+=d*d;
            n=n/10;
        }
        n= sum;
       } 
       if (n==1 || n==7)return true ;
        return false;
    }
   
};