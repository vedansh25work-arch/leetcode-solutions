class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc= false;
        bool dec= false ;
        for( int i =1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            
            if(nums[i]<nums[i-1]){ dec= true;
          }
            else if( nums[i]>nums[i-1]){
                
                inc = true ;
            }
            if(inc == true && dec == true) return false;
        }
        return true;
    }
};