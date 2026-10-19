class Solution {
public:
    bool judgeCircle(string moves) {
        map<char,int> mp;
        for( int i =0;i<moves.size();i++){
            mp[moves[i]]++;
        }
        return (mp['R']==mp['L'] && mp['U']==mp['D']);
    }
};