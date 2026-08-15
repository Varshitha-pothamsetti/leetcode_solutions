// Last updated: 15/08/2026, 13:52:32
1class LRUCache {
2public:
3   int cap;
4   list<pair<int, int>> l;
5   unordered_map<int, list<pair<int, int>>::iterator> mp;
6   
7    LRUCache(int capacity) {
8        cap = capacity;
9    }
10    
11    int get(int key) {
12        if(mp.find(key) == mp.end())
13            return -1;
14        auto it = mp[key];
15        int value = it -> second;
16        l.erase(it);
17        l.push_front({key, value});
18        mp[key] = l.begin();
19        return value;
20    }
21    
22    void put(int key, int value) {
23        if(mp.find(key) != mp.end()){
24            l.erase(mp[key]);
25        }
26
27        l.push_front({key, value});
28        mp[key] = l.begin();
29
30        if(l.size() > cap){
31            int oldKey = l.back().first;
32            l.pop_back();
33            mp.erase(oldKey);
34        }
35    }
36};
37
38/**
39 * Your LRUCache object will be instantiated and called as such:
40 * LRUCache* obj = new LRUCache(capacity);
41 * int param_1 = obj->get(key);
42 * obj->put(key,value);
43 */