class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        int cnt = 0;
        int cnt0=0;
        int a=0;
        if(n==1){
            if(nums[0]==0) return 0;
        }
        while (cnt0 != n) {
             while (!pq.empty()) {
                
                pq.pop();
            }   
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != 0)
                    pq.push(nums[i]);
            }
            if(pq.empty())break;
            a = pq.top();
           
            cnt0=0;
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0)
                    cnt0++;
                if (nums[i] > 0)
                    nums[i] -= a;
                
            }
            cnt++;
        }
        return cnt;
    }
};