class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int> hash;
        for( int x: nums){

            hash[x]++;
        }
        int n = nums.size();
        for (auto it : hash) {
            pq.push({it.second, it.first});
        }
       vector<int>ans;
       while(k){

        ans.push_back(pq.top().second);
        pq.pop();
        k--;
       }
       return ans;

    }
};