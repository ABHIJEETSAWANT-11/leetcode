class Solution {
public:
    bool isValid(string s) {

        while (true) {
            int n = s.size();

            for (int i = 0; i < n - 1; i++) {
                if ((s[i] == '(' && s[i + 1] == ')') ||
                    (s[i] == '{' && s[i + 1] == '}') ||
                    (s[i] == '[' && s[i + 1] == ']')) {

                    s.erase(i, 2);
                    break;
                }
            }

            if (n == s.size())
                break;
        }

        return s.empty();
    }
};