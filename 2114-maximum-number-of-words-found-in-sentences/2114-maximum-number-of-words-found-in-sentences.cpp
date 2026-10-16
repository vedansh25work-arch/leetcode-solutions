class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = INT_MIN;
       
        for(int i=0;i<sentences.size();i++){
             int cnt =1;
            for( int j =0;j<sentences[i].size();j++){
                if(sentences[i][j]==' ')cnt++;
                
            }
            maxi = max( cnt , maxi);
             
        }
        return maxi ;
    }
};