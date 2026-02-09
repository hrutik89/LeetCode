class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;

        for (int i = 0; i < s.size(); i++) {
            string result = "";

            for (int j = i; j < s.size(); j++) {
                bool dup = false;

                for (int k = 0; k < result.size(); k++) {
                    if (result[k] == s[j]) {
                        dup = true;
                        break;
                    }
                }

                if (dup)
                    break;

                result += s[j];
            }

            if (result.size() > maxLen)
                maxLen = result.size();
        }

        return maxLen;
    }
};
