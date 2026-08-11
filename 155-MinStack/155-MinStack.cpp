// Last updated: 11/08/2026, 11:25:32
1
2class MinStack {
3public:
4    stack<int> st;
5    stack<int> mn;
6    MinStack() {
7        
8    }
9    
10    void push(int val) {
11        st.push(val);
12        if(mn.empty() || val <= mn.top())
13          mn.push(val);
14    }
15    
16    void pop() {
17        if(st.top() == mn.top())
18           mn.pop();
19           st.pop();
20    }
21    
22    int top() {
23        return st.top();
24    }
25    
26    int getMin() {
27        return mn.top();
28    }
29};
30
31/**
32 * Your MinStack object will be instantiated and called as such:
33 * MinStack* obj = new MinStack();
34 * obj->push(value);
35 * obj->pop();
36 * int param_3 = obj->top();
37 * int param_4 = obj->getMin();
38 */