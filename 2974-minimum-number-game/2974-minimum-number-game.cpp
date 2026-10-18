class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        sort(nums.begin(),nums.end());
        while(i<n-1){
            swap( nums[i],nums[i+1]);
            i+=2;
        }
        return nums;
    }
};