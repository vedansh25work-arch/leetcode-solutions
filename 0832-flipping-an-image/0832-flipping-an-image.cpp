class Solution {
public:
vector<int>flipp(vector<int> & arr){
 reverse(arr.begin(),arr.end());
 return arr;
}
vector<int>invert(vector<int> & arr){
    for( int i =0;i<arr.size();i++){
        if(arr[i]==0) arr[i]=1;
        else if(arr[i]==1)arr[i]=0;
    }
    return arr;
}
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image .size();
        for( int i =0;i<n;i++){
            image[i]=flipp(image[i]);
            image[i]=invert(image[i]);
        }
        return image ;
    }
};