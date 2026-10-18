class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        string reversed="";
        for( int i =0;i<n;i++){
            reversed= words[i];
            reverse(reversed.begin(),reversed.end());
            
            if(words[i]==reversed) return words[i];
        }
        return "";
    }
};