class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumn=0,sumd=0;
        for( int i=1;i<=n;i++){
            if(i%m==0)sumd+=i;
            else sumn+=i;
        }
        return sumn-sumd;
    }
};