// Last updated: 01/03/2026, 20:18:57
class Solution {
public:
    bool isPrime(int x){
        if(x < 2) return false;
        if(x % 2 == 0) return x == 2;
        for(int i = 3; 1LL * i * i <= x; i += 2){
            if(x % i == 0) return false;
        }
        return true;
    }
    int largestPrime(int n) {
        vector<int>primes;
        vector<bool> mark(n + 1, true);
        mark[0] = mark[1] = false;
        for(int i = 2; 1LL * i * i <= n; i++){
            if(mark[i]){
                for(long long j = 1LL * i * i; j <= n; j += i)
                    mark[j] = false;
            }
        }
        for(int i = 2; i <= n; i++)
            if(mark[i]) primes.push_back(i);
        long long sum = 0;
        int ans = 0;
        
           for(int p: primes){
               sum += p;
               if(sum > n) break;
               if(isPrime(sum)) ans = sum;
           }
        return ans;
    }
};