class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        vector<int>hash(123);
        for(char c:s){
            hash[c]++;
        }
        int len =0;
        bool hasOdd= false ;
        for(int i :hash){
            if(i%2==0){
               len+=i; 
            }
            else {len+=i-1;
            hasOdd=true;}
        }
        return hasOdd?len+1:len;
    }
};