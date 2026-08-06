// Last updated: 06/08/2026, 20:37:31
1class MyHashMap {
2private:
3    vector<int> map;
4public:
5    MyHashMap() {
6       map.resize(1000001, -1); 
7    }
8    
9    void put(int key, int value) {
10        map[key] = value;
11    }
12    
13    int get(int key) {
14        return map[key];
15    }
16    
17    void remove(int key) {
18        map[key] = -1;
19    }
20};
21
22/**
23 * Your MyHashMap object will be instantiated and called as such:
24 * MyHashMap* obj = new MyHashMap();
25 * obj->put(key,value);
26 * int param_2 = obj->get(key);
27 * obj->remove(key);
28 */