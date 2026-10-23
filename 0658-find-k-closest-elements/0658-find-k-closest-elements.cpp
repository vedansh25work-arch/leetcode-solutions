class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        priority_queue<pair<int,int>>pq;
        vector<int> ans;
        for(int z:arr){
            pq.push({abs(z-x),z});
        
        if(pq.size()>k){
            pq.pop();
            
        }}
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans ;
    }
};