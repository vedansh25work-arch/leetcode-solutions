class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>sans(26,0);
        vector<int >tans(26,0);
        for( char c:s){
            sans[c-'a']++;

        }
         for( char c : t){
          
tans[c-'a']++;
        }
        for( int i =0;i<27;i++){
            if(sans[i] != tans[i]) return i+'a';
        }
        return '\0';
    }
};