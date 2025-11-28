class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       /* int n=count(nums.begin(),nums.end(),0);
        auto it=remove(nums.begin(),nums.end(),0);
        nums.erase(it,nums.end());
        while(n--)nums.push_back(0);
        */
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[l]=nums[i];
                l++;
            }
        }
        for(int i=l;i<nums.size();i++){
            nums[i]=0;
        }
    }
};