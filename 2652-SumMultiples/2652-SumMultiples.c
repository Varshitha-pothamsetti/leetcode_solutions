// Last updated: 09/09/2026, 21:26:07
int sumOfMultiples(int n){
    int sum=0;
    for(int i=0;i<n+1;i++){
        if(i%3==0 || i%5==0 || i%7==0){
            sum += i;
        }
    }
    return sum;
}