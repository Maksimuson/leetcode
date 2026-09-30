class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        if (s.empty()) return 0;

        while (ss >> word) {   
            words.push_back(word);
        }
        return words.back().length();
    }
};