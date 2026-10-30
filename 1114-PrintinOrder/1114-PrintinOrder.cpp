// Last updated: 30/10/2026, 19:10:00
1#include <mutex>
2#include <condition_variable>
3#include <functional>
4
5class Foo {
6public:
7    mutex m;
8    condition_variable cv;
9    int count = 0;
10
11    Foo() {
12        
13    }
14
15    void first(function<void()> printFirst) {
16        printFirst();
17
18        {
19            lock_guard<mutex> lock(m);
20            count = 1;
21        }
22        cv.notify_all();
23    }
24
25    void second(function<void()> printSecond) {
26        unique_lock<mutex> lock(m);
27        cv.wait(lock, [this] { return count == 1; });
28
29        printSecond();
30        count = 2;
31
32        lock.unlock();
33        cv.notify_all();
34    }
35
36    void third(function<void()> printThird) {
37        unique_lock<mutex> lock(m);
38        cv.wait(lock, [this] { return count == 2; });
39
40        printThird();
41    }
42};
43