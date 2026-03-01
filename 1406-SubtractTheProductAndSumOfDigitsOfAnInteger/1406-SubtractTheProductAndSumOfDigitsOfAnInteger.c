// Last updated: 01/03/2026, 20:20:41
int subtractProductAndSum(int n) {
     int sum=0,product=1;
     while(n!=0){
        sum += n%10;
        product *= n%10;
        n=n/10;
     }
     return(product - sum);
}