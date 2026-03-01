// Last updated: 01/03/2026, 20:21:05
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int ans = fib(n-1) + fib(n-2);
    return ans;
}