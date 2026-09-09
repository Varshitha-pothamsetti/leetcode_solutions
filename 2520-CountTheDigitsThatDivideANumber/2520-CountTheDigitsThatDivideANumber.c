// Last updated: 09/09/2026, 21:26:53
int countDigits(int num) {
    int count = 0;
    int temp = num;
    while(temp != 0){
        int val = temp % 10;
        if(val != 0){
            if(num % val == 0){
               count++; 
            }
        }
        temp /= 10;
    }
    return count;
}