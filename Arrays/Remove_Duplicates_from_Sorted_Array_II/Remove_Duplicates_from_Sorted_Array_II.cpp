class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int j=2,i=2;
    if(nums.size()<2)return nums.size();
    while(i<nums.size()){
        if(nums[i]==nums[j-2]){
            i++;
        }else{
nums[j]=nums[i];
i++;j++;

        }
    }
    return j;

    }
};