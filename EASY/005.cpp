// Robot Move to Origin

class Solution {
public:
    bool judgeCircle(string moves) {
        int i = 0; // vertical axis
        int j = 0; // horizontal axis

        for (char move : moves) {
            if (move == 'U') i++;
            else if (move == 'D') i--;
            else if (move == 'R') j++;
            else if (move == 'L') j--;
        }

        return (i == 0 && j == 0);
    }
};
