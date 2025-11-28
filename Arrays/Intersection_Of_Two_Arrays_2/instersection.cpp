class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         Total time complexity:𝑂(𝑛+𝑚)
// Space Complexity:freq array of size 1001 → O(1) (constant space, not dependent on input size).
   /* int freq[1001]={0};
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(freq[nums2[i]])
            {
                freq[nums2[i]]--;
                v.push_back(nums2[i]);
            }
            
        }
        return v;
        */
        
// Time complexity: O(n log n + m log m) because of sorting

// Space complexity: O(1) extra (ignoring space used by sort in some implementations, which may be O(log n)
        vector<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j])i++;
            else if(nums1[i]>nums2[j])j++;
            else {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return res;
        
    }
};