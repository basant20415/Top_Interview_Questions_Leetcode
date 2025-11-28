class Solution {
public:
    /*
    bool containsDuplicate(vector<int>& nums) {
     int count=1;
        bool flag=false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i]==nums[i+1])count++;
            if(count>=2)flag= true;
    }
     return flag; 
    }
    */
    
      bool containsDuplicate(vector<int>& nums) {
          unordered_set <int>s;
          for(int i=0;i<nums.size();i++){
              s.insert(nums[i]);
              if(s.size()!=i+1)return true;
          }
          return false;
          
          
      }
};