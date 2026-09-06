#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n - 1;
        int length = 0;

        // 1. Peeche se saari extra spaces ko skip karo
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // 2. Aakhri word ke characters ko count karo jab tak space ya start na aa jaye
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};