// Last updated: 09/09/2026, 21:27:36
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
