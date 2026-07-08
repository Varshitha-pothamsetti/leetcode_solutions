// Last updated: 08/07/2026, 21:10:38
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