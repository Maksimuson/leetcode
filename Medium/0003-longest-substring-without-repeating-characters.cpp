class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        string cur;
        int best=0;

        for (char n : s)
        {
            size_t pos = cur.find(n);
            if(pos != string::npos)
                cur.erase(0, pos+1);
            cur.push_back(n);
            best= max(best, (int)cur.size());
        }
        return best;
    }
};
