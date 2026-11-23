class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        int cnt =0;
        if(n==1) return 1 ;
        if(nums[0]>=nums[1])cnt++;
        for(int i =1;i<n-1;i++){
            double avg = (nums[i-1] + nums[i+1]) / 2.0;
if(nums[i]>=avg)cnt++;
        }
        if(nums[n-1]>=nums[n-2])cnt++;
return cnt ;

    }
};