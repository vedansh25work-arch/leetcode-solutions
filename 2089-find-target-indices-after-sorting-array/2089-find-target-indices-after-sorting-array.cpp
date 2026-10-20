class Solution {
public:
    int lowerb(vector<int>& arr, int target) {
        int ans = arr.size();
        int low = 0;
        int high = arr.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans ;
    }
    int upperb(vector<int>& arr, int target) {
        int ans = arr.size();
        int low = 0;
        int high = arr.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int ub = upperb(nums, target);
        int lb = lowerb(nums, target);
        for (int i = lb; i <ub; i++) {
            ans.push_back(i);
        }
        return ans;
    }
};