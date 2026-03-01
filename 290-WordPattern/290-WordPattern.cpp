// Last updated: 01/03/2026, 20:22:09
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;

        stringstream ss(s);
        string word;
        int i = 0;

        while (ss >> word) {
            if (i == pattern.size()) 
                return false;

            char ch = pattern[i];

            if (m1.count(ch) && m1[ch] != word)
                return false;

            if (m2.count(word) && m2[word] != ch)
                return false;

            m1[ch] = word;
            m2[word] = ch;
            i++;
        }

        return i == pattern.size();
    }
};
