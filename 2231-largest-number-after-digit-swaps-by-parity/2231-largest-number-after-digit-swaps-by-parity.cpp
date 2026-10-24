
class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> pqe;
        priority_queue<int> pqo;

        string s = to_string(num);

        for (char x : s) {
            int digit = x - '0';

            if (digit % 2 == 0)
                pqe.push(digit);
            else
                pqo.push(digit);
        }

        string ans = "";

        for (char x : s) {
            int digit = x - '0';

            if (digit % 2 == 0) {
                ans += char(pqe.top() + '0');
                pqe.pop();
            } else {
                ans += char(pqo.top() + '0');
                pqo.pop();
            }
        }

        return stoi(ans);
    }
};
