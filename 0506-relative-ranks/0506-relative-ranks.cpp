
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> arr;
        for (int i = 0; i < score.size(); i++) {
            arr.push({score[i], i});
        }

        vector<string> ans(score.size());
        for (int i = 0; i < score.size(); i++) {
            int idx = arr.top().second;
            arr.pop();
            if (i == 0)
                ans[idx] = "Gold Medal";
            else if (i == 1)
                ans[idx] = "Silver Medal";
            else if (i == 2)
                ans[idx] = "Bronze Medal";
            else
                ans[idx] = to_string(i + 1);
        }
        return ans;
    }
};
