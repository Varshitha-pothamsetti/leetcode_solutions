// Last updated: 01/03/2026, 20:19:19
int scoreOfString(char* s) {    
        int sum=0, i=0;
        while(s[i+1]!=NULL)
        {
            sum=sum+abs(s[i]-s[i+1]);
            i++;
        }
        return(sum);
}