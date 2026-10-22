class Solution {
public:
    int strStr(string haystack, string needle) {
       int n = haystack.size();
       int m = needle.size();
       int l =0, r = m-1;
      
       while(r<n){
         string ans ="";
        for( int i = l;i<=r;i++){
            ans+=haystack[i];
        }
        if(ans == needle) return l;
l++,r++;
       } 
        return -1;
    }
   
};