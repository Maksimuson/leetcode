class Solution {
public:
    bool checkValidString(string s) {
        int lo = 0, hi =0;
        for (char c : s)
        {
            if (c == '(') 
            {
                hi++;
                lo++;
            } else if (c== ')')
            {
                hi--;
                lo--;
            } else {
                hi++;
                lo--;
            }
            if(hi<0) return false;
            if(lo<0) lo=0;
        }
        return lo==0;
    }
};