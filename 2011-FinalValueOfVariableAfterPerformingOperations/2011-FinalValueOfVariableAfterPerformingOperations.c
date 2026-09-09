// Last updated: 09/09/2026, 21:27:44
int finalValueAfterOperations(char ** operations, int size){
    int x=0;
    while(size--)
    if(operations[size][1] =='-') --x;
    else x++;
    return x;
    
}