// Last updated: 08/08/2026, 11:15:51
1class MyStack {
2private:
3    std::queue<int> q;
4
5public:
6    MyStack() {
7        
8    }
9    
10    void push(int x) {
11        q.push(x);
12        int sz = q.size();
13        for (int i = 0; i < sz - 1; ++i) {
14            q.push(q.front());
15            q.pop();
16        }
17    }
18    
19    int pop() {
20        int topVal = q.front();
21        q.pop();
22        return topVal;
23    }
24    
25    int top() {
26        return q.front();
27    }
28    
29    bool empty() {
30        return q.empty();
31    }
32};