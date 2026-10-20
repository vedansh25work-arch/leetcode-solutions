class Solution {
public:
    vector<int> constructRectangle(int area) {
        int left = 1 ;
         int right = area;
         int mini = INT_MAX;
         vector<int>ans;
         while(left <= right){
            if(left*right==area){

                if(right-left<mini){
                    mini = min(right-left, mini);
                    ans.clear();
                    ans.push_back(right);
                    ans.push_back(left);
                }
                left++;
                
            }
            else if(left*right>area)right--;
            else left++;
         }
         return ans ;
    }
};