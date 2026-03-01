// Last updated: 01/03/2026, 20:19:25
int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0;
    int temp = x;
    while(temp > 0){
        sum += (temp % 10);
        temp /= 10;
    }
        if(x % sum == 0){
            return sum;
        }
         return -1;
}