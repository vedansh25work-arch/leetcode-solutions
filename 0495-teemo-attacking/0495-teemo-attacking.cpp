class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if(n==0) return 0;
        int i =0;
        int ans =duration;
        while(i+1<n){
         if(timeSeries[i]+duration<=timeSeries[i+1]){
            ans+=duration;
         } else{
            ans+=timeSeries[i+1]-timeSeries[i];
         }
i++;
        }
        return ans ;
    }

};