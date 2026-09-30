class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return" ";

        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            prefix = commonPrefix(prefix, strs[i]);
        }
        return prefix;
    }
private:
    string commonPrefix(string prefix, string strs) {
        int minLenghtOfString = fmin(prefix.length(), strs.size());

        for (int i = 0; i < minLenghtOfString; i++) {
            if (prefix[i] != strs[i]) {
                return prefix.substr(0, i);
            }
        }
        return prefix.substr(0, minLenghtOfString);

    }
};