class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int cnt =0;
        for( int i =0;i<n;i++){
            if(nums[i]==1){nums[i]-=1;
            cnt++;}
            if(nums[i]==2){
                nums[i]+=1;
                cnt++;
            }
            if(nums[i]%3==1){nums[i]-=1;
            cnt++;}
            if(nums[i]%3==2){
                nums[i]+=1;
                cnt++;
            }
        }
        return cnt;
    }
};