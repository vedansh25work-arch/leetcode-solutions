class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int>even;
        vector<int>odd;
        for(int x:nums){
            if(x%2==0)even.push_back(x);
            else odd.push_back(x);
        }
        for(int i=0;i<even.size();i++){
            nums[i]=even[i];
        }
        for( int i =even.size();i<n;i++){
           nums[i]=odd[i-even.size()];
        }
        return nums;
    }
};