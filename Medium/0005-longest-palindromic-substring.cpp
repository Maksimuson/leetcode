class Solution {
public:
    string longestPalindrome(string s) {
    int start = 0, maxLen = 0;
    int n = s.size();

    for (int i=0; i<n; i++)
    {
        expand(s,i, i, start, maxLen);
        expand(s,i, i+1, start, maxLen);
    }
    return s.substr(start, maxLen);
    }

private:
    void expand (const string& s, int l, int r, int& start, int& maxLen)
    {
        while (l>= 0 && r < (int)s.size() && s[l] ==s[r])
        {
            l--;
            r++;
        }

        int len = r - l - 1;   
        if (len > maxLen)
        {
            maxLen = len;
            start = l + 1;
        }
    }
};