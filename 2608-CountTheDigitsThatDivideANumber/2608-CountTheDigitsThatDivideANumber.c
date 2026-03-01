// Last updated: 01/03/2026, 20:19:45
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