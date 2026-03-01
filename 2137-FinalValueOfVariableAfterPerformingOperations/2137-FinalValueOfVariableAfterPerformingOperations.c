// Last updated: 01/03/2026, 20:19:58
int finalValueAfterOperations(char ** operations, int size){
    int x=0;
    while(size--)
    if(operations[size][1] =='-') --x;
    else x++;
    return x;
    
}