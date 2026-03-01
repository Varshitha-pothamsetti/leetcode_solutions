// Last updated: 01/03/2026, 20:19:32
int sumOfMultiples(int n){
    int sum=0;
    for(int i=0;i<n+1;i++){
        if(i%3==0 || i%5==0 || i%7==0){
            sum += i;
        }
    }
    return sum;
}