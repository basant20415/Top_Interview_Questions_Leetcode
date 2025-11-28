class Solution {
public:
    int countPrimes(int n) {
         vector<int> primes(n,1);
        vector<int>p;
        if(n<=2)return 0;
       
        primes[0]=0,primes[1]=0;
        for(int i=2;i<n;i++){
            if(primes[i]){
                p.push_back(i);
                for(long long j = (long long)i * i; j < n; j += i)primes[j]=0;
            }
        }
        return p.size();
    }
};