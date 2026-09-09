// Last updated: 09/09/2026, 21:24:50
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int count = 0, i = 0;
    int *ans = (int *)malloc(wordsSize *sizeof(int));
    for(i = 0; i< wordsSize; i++)
    {
        if(strchr(words[i], x)!=NULL)
        {
            ans[count ++] =i;
        }
    }
    * returnSize =count;
    return ans;
    }