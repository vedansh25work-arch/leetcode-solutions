class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int suml=0,sumg=0;
        for( int i =0;i<n;i++){
            if(nums[i]<10)suml+=nums[i];
            else sumg+=nums[i];
        }
        return suml!=sumg;    }
};