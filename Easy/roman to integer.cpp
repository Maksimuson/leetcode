class Solution {
public:
    int romanToInt(std::string s) {
       int k = 0;
        for (size_t i = 0; i < s.size(); ++i) {
            int curr = 0;
            if(s[i] == 'I') curr = 1;
            else if(s[i] == 'V') curr = 5;
            else if(s[i] == 'X') curr = 10;
            else if(s[i] == 'L') curr = 50;
            else if(s[i] == 'C') curr = 100;
            else if(s[i] == 'D') curr = 500;
            else if(s[i] == 'M') curr = 1000;

        int next = 0;
            if(i + 1 < s.size()) {
                if(s[i+1] == 'I') next = 1;
                else if(s[i+1] == 'V') next = 5;
                else if(s[i+1] == 'X') next = 10;
                else if(s[i+1] == 'L') next = 50;
                else if(s[i+1] == 'C') next = 100;
                else if(s[i+1] == 'D') next = 500;
                else if(s[i+1] == 'M') next = 1000;
            }

        if(curr < next) {
                k += (next - curr);
                i++;
            } else {
                k += curr;
            }
        }
        return k;
    }
};