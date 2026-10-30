class Solution {
public:
    bool isvowel(char c) {
        return c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ||
               c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    string sortVowels(string s) {
        vector<char> v;

        for (char c : s) {
            if (isvowel(c)) {
                v.push_back(c);
            }
        }

        sort(v.begin(), v.end());

        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isvowel(s[i])) {
                s[i] = v[j++];
            }
        }

        return s;
    }
};