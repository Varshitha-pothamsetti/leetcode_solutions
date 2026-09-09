// Last updated: 09/09/2026, 21:22:48
class Solution {
public:
int getMaviness(int num){
    string s = to_string(num);
    if(s.length() < 3)
       return 0;
       int cnt = 0;
       for(int i = 1; i < s.length() - 1; i++){
        if((s[i] > s[i - 1] && s[i] > s[i + 1]) || 
           (s[i] < s[i - 1] && s[i] < s[i + 1])){
            cnt++;
        }
       }
       return cnt;
}
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int num = num1; num <= num2; num++){
            ans += getMaviness(num);
        }
        return ans;
    }
};