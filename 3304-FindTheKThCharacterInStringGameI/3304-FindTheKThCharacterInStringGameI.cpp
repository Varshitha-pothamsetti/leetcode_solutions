// Last updated: 09/09/2026, 21:23:31
class Solution {
public:
    char kthCharacter(int k) {
       string word = "a";
       while(word.size() < k){
        string next = "";
        for(char ch : word){
            if(ch == 'z')
              next += 'a';
            else
              next += ch + 1;
        }
        word += next;
       } 
       return word[k - 1];
    }
};