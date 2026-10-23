class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
       
        int k = flowerbed.size();
        int i =1;
        if(n==0 ) return true ;
        if(k==0) return false ;
       if (k == 1) {
            if (flowerbed[0] == 0) n--;
            return n == 0;
        }
         if(flowerbed[0]==0 && flowerbed[1]==0) {
            n--;
            flowerbed[0]=1;
        }

        while(i+1<k && n){
if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0) {n--;
flowerbed[i]=1;}
i++;
        }
        if( n>0 && flowerbed[k-1]==0 && flowerbed[k-2]==0){
            flowerbed[k-1]=1;
            n--;
        }
        return n==0;
    }
};