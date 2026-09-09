// Last updated: 09/09/2026, 21:24:25
int scoreOfString(char* s) {    
        int sum=0, i=0;
        while(s[i+1]!=NULL)
        {
            sum=sum+abs(s[i]-s[i+1]);
            i++;
        }
        return(sum);
}