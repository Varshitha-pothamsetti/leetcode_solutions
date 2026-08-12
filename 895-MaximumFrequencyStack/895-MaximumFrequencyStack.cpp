// Last updated: 12/08/2026, 21:09:36
1class FreqStack {
2public:
3    unordered_map<int, int> freq;
4    unordered_map<int, vector<int>> group;
5    int maxFreq = 0;
6
7    FreqStack() {
8    }
9
10    void push(int val) {
11        freq[val]++;
12        int f = freq[val];
13
14        group[f].push_back(val);
15
16        maxFreq = max(maxFreq, f);
17    }
18
19    int pop() {
20        int val = group[maxFreq].back();
21        group[maxFreq].pop_back();
22
23        freq[val]--;
24
25        if (group[maxFreq].empty()) {
26            maxFreq--;
27        }
28
29        return val;
30    }
31};
32
33/**
34 * Your FreqStack object will be instantiated and called as such:
35 * FreqStack* obj = new FreqStack();
36 * obj->push(val);
37 * int param_2 = obj->pop();
38 */