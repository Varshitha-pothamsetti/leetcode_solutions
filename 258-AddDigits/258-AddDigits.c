// Last updated: 01/03/2026, 20:22:16
int addDigits(int num) {
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    if(sum>9)
    return addDigits(sum);
    else
    return sum;
}