class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int mx = INT_MIN;
        vector<bool> ans ( n);
        for( int i =0;i<n;i++){
            mx = max( mx, candies[i]);
        }
       for( int i =0;i<n;i++){
        ans[i]= candies[i]+extraCandies>=mx? true:false;
       } 
       return ans ;
    }
};