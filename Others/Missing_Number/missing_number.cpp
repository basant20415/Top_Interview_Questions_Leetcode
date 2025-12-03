class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int total;
        auto it=find(nums.begin(),nums.end(),0);
        if(it==nums.end())return 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        total=n*(n+1)/2;
        return total-sum;
      
    }
};

// -------------------
class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int x=0;
        for(int i=0;i<=nums.size();i++){
            x^=i;
        }
      for(int i=0;i<nums.size();i++){
          x^=nums[i];
      }
        return x;
    }
};