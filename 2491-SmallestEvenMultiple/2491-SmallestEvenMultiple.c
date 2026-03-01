// Last updated: 01/03/2026, 20:19:47
int smallestEvenMultiple(int n) {
    int sum=0;
    for(int i=0;i<n;i++){
        if(n%2==0){
            sum=n;
        }
        else if(n * 2 % 2 == 0){
                sum=n*2;
            }
        }
        return sum;
    }   