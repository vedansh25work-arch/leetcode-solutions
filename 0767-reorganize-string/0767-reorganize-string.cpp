class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }
        string ans = "";
        while (pq.size()>=2) {
            char a = pq.top().second;
            int u = pq.top().first;
            pq.pop();
            char b = pq.top().second;
            int v = pq.top().first;
            pq.pop();
            ans += a;
            ans += b;
           
            
           if(u-1>0){
                pq.push({u-1,a});
            }
            if (v-1>0)pq.push({v-1,b});
        }
        if(pq.size()==1){
            if(pq.top().first==1){
                ans+=pq.top().second;
                 
            }
            else return "";
        }
       return ans.size()==n?ans:"";
    }
};