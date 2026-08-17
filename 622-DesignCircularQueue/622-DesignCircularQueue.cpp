// Last updated: 17/08/2026, 19:54:38
1class MyCircularQueue {
2public:
3    vector<int> q;
4    int front, rear, size, capacity;
5
6    MyCircularQueue(int k) {
7        capacity = k;
8        q.resize(k);
9        front = 0;
10        rear = -1;
11        size = 0;
12    }
13    bool enQueue(int value) {
14        if (isFull())
15            return false;
16        rear = (rear + 1) % capacity;
17        q[rear] = value;
18        size++;
19        return true;
20    }
21    bool deQueue() {
22        if (isEmpty())
23            return false;
24        front = (front + 1) % capacity;
25        size--;
26        return true;
27    }
28    int Front() {
29        if (isEmpty())
30            return -1;
31        return q[front];
32    }
33    int Rear() {
34        if (isEmpty())
35            return -1;
36        return q[rear];
37    }
38    bool isEmpty() {
39        return size == 0;
40    }
41    bool isFull() {
42        return size == capacity;
43    }
44};