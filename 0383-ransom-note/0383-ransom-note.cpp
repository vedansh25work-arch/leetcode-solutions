class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>s1(26,0);
        vector<int>s2(26,0);
        for(char x:ransomNote){
            s1[x-'a']++;
        }
        for(char x:magazine){
            s2[x-'a']++;
        }
        for(int i =0;i<s1.size();i++){
            if(s1[i] > s2[i])return false;
        }
        return true;
    }
};