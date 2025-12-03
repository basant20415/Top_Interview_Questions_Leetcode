class Solution {
public:
    int hammingWeight(int n) {
      //  return __builtin_popcount(n);
        
        
        
        int count=0;
        while(n){
            count+=(n&1);
            n=n>>1;
        }
        return count;
    }
};