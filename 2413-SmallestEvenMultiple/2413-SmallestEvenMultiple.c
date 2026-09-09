// Last updated: 09/09/2026, 21:27:12
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