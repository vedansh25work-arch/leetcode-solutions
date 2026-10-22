class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int m = jewels.size();
        vector<int>j(123,0);
        for(char c:jewels){
            j[c-'A']++;
        }
        int n = stones .size();
        int cnt =0;
        for( int i =0;i<n;i++){
            if(j[stones[i]-'A'])cnt++;
        }
        return cnt ;
    }
};