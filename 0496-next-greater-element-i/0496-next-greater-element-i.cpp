class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n = nums2.size();
stack<int>st ;
unordered_map<int,int>mp;
       for(int i =n-1;i>=0;i--){
        int element = nums2[i];
        if(st.empty()){
            mp[element]=-1;
            st.push(element);

        }
        else{
            while(!st.empty() && st.top()<element){
                st.pop();
            }
            if (st.empty()){
                mp[element]=-1;
            } 

            else{
                mp[element]=st.top();
            }
          
            st.push(element);
        }
       }
       vector<int> result;
       for(auto i :nums1){
        result.push_back(mp[i]);
       }
        return result;
    }
};