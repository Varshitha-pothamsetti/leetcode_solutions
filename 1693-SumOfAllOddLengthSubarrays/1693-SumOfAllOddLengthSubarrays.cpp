// Last updated: 01/03/2026, 20:20:24
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int Totalsum = 0;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += arr[j];
                int length = j - i + 1; 
                if(length % 2 == 1){
                    Totalsum += sum;
                }
            }
        }
        return Totalsum;
    }
};