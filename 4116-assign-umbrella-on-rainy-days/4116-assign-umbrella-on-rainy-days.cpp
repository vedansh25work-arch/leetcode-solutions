
class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        vector<string> ans;
        int cnta = 0;
        int cntb = 0;

        for (int i = 0; i < n; i++) {
            if (rain[i] == 0) {
                ans.push_back("None");
            }
            else if (i + 1 < n && rain[i + 1] == 1) {
                if (cnta <= cntb) {
                    ans.push_back("Alice");
                    cnta++;
                }
                else {
                    ans.push_back("Bob");
                    cntb++;
                }
            }
            else {
                ans.push_back("Bob");
                cntb++;
            }
        }

        return ans;
    }
};
