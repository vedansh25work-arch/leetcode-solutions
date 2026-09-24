class Solution {
public:
int sums(vector<int>arr){
    int n= arr.size();
    int sum =0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum =0;
        int mw=0;
        for(int i =0;i<accounts.size();i++){
            sum=sums(accounts[i]);
            mw=max(sum,mw);
        }
        return mw ;
    }
};