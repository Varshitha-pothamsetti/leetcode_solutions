// Last updated: 01/03/2026, 20:19:17
int countCompleteDayPairs(int* hours, int hoursSize) {
    int count=0;
    for(int i=0;i<hoursSize;i++){
        for(int j=i+1;j<hoursSize;j++){
            if((hours[i] + hours[j])%24==0)
                count++;
        }
    }
    return count;
    
}