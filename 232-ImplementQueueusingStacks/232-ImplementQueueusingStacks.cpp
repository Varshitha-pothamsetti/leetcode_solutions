// Last updated: 09/08/2026, 21:08:03
1class MyQueue {
2public:
3    stack<int> s1, s2;
4    MyQueue() {    
5    }
6    void push(int x) {
7        s1.push(x);
8    }
9    int pop() {
10        if (s2.empty()) {
11            while (!s1.empty()) {
12                s2.push(s1.top());
13                s1.pop();
14            }
15        }
16        int x = s2.top();
17        s2.pop();
18        return x;
19    }
20    int peek() {
21        if (s2.empty()) {
22            while (!s1.empty()) {
23                s2.push(s1.top());
24                s1.pop();
25            }
26        }
27        return s2.top();
28    }
29    bool empty() {
30        return s1.empty() && s2.empty();
31    }
32};