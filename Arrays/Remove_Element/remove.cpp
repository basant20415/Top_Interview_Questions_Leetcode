class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
//time complexity :o(n)
//space complexity:o(n)
//violates the inplace condition
        // vector<int>v;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=val)v.push_back(nums[i]);
        // }
        // nums=v;
        // return nums.size();

        // --------------
        /*
        ✅ Step 1: Time Complexity of remove(...)

remove(nums.begin(), nums.end(), val):

Visits every element once → O(n)

Moves (shifts) elements that are not equal to val

Does not change vector size, only rearranges values

✔ Time: O(n)
✔ Space: O(1) (works in-place, only uses iterators)

✅ Step 2: Time Complexity of erase(...)

nums.erase(it, nums.end()):

Removes the range [it → end)

Where it is the new logical end from remove

Erasing causes memory shifting for the number of removed elements

Worst case: all elements are removed → remove last n elements → still O(n).

✔ Time: O(n)
✔ Space: O(1)
        */
    //  nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
    //   return nums.size();

    // -----
//     ✔ O(n) time
//     ✔ O(1) space
//     ✔ In-place
int k=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;

    }
};