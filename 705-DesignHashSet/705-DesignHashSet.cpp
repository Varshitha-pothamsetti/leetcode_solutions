// Last updated: 04/08/2026, 22:23:16
1class MyHashSet {
2private: 
3    vector<bool> present;
4public:
5    MyHashSet() {
6      present.resize(1000001, false);
7    }
8    
9    void add(int key) {
10        present[key] = true;
11    }
12    
13    void remove(int key) {
14        present[key] = false;
15    }
16    
17    bool contains(int key) {
18       return present[key];
19    }
20};
21
22/**
23 * Your MyHashSet object will be instantiated and called as such:
24 * MyHashSet* obj = new MyHashSet();
25 * obj->add(key);
26 * obj->remove(key);
27 * bool param_3 = obj->contains(key);
28 */