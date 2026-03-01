// Last updated: 01/03/2026, 20:19:08
class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> answer(n - k + 1);
        unordered_map<int, int> freq;
        for (int i = 0; i < k; i++) {
            freq[nums[i]]++;
        }
        auto calculateXSum = [&]() {
            priority_queue<pair<int, int>> pq;
            for (const auto& p : freq) {
                pq.push({p.second, p.first});
            }
            
            int sum = 0;
            int count = 0;
            while (!pq.empty() && count < x) {
                auto top = pq.top();
                pq.pop();
                sum += top.second * top.first; 
                count++;
            }
            return sum;
        };
        answer[0] = calculateXSum();
        for (int i = 1; i <= n - k; i++) {
            int outgoing = nums[i - 1];
            freq[outgoing]--;
            if (freq[outgoing] == 0) {
                freq.erase(outgoing);
            }
            int incoming = nums[i + k - 1];
            freq[incoming]++;
            answer[i] = calculateXSum();
        }
        
        return answer;
    }
};