// Last updated: 01/03/2026, 20:19:55
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        int size = operations.size();
        while (size--) {
            if (operations[size][1] == '-') --x;
            else ++x;
        }
        return x;
    }
};
