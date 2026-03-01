// Last updated: 01/03/2026, 20:23:20
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix = strs[0];
        for(size_t i = 1; i < strs.size(); ++i){
            const string& s = strs[i];
            while(s.find(prefix) != 0){
                if(prefix.empty()) return "";
                prefix.pop_back();
            }
        }
        return prefix;
    }
};