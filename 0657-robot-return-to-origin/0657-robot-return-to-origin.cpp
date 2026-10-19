
class Solution {
public:
    bool judgeCircle(string moves) {
        int horizontal = 0, vertical = 0;

        for (char c : moves) {
            if (c == 'R') horizontal++;
            else if (c == 'L') horizontal--;
            else if (c == 'U') vertical++;
            else if (c == 'D') vertical--;
        }

        return horizontal == 0 && vertical == 0;
    }
};
