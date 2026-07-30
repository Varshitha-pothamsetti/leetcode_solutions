// Last updated: 30/07/2026, 19:31:16
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> children;
7
8    Node() {}
9
10    Node(int _val) {
11        val = _val;
12    }
13
14    Node(int _val, vector<Node*> _children) {
15        val = _val;
16        children = _children;
17    }
18};
19*/
20
21class Solution {
22public:
23    int maxDepth(Node* root) {
24        if(root == nullptr)
25          return 0;
26        int depth = 0;
27        for(Node* child : root -> children){
28            depth = max(depth, maxDepth(child));
29        }
30        return depth + 1;
31    }
32};