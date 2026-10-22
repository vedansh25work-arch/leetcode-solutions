class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>hash1(301,0);
        vector<int>hash2(301,0);
        vector<int>hash3(301,0);
        vector<int>ans;
for(int x:nums1)hash1[x]++;
for( int x:nums2)hash2[x]++;
for(int x:nums3)hash3[x]++;

for( int i =1;i<301;i++){
 if ((hash1[i] > 0 && hash2[i] > 0) ||
                (hash1[i] > 0 && hash3[i] > 0) ||
                (hash2[i] > 0 && hash3[i] > 0))
                ans.push_back(i);
}
        return ans;
    }
};