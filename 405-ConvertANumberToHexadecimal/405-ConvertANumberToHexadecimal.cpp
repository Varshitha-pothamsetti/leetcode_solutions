// Last updated: 01/03/2026, 20:21:55
class Solution {
public:
    string toHex(int num) {
       stringstream ss;
       ss << std::hex << num;
       return ss.str(); 
    }
};