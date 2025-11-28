class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    // solution using frequency array
    // total complexity -->o(n)
    //    space complexity:
    //     freq[201] → constant → O(1)
    // vector<int> dub stores unique numbers → O(k) ≤ O(n)
    // so overall o(n)
    /*vector<int>dub;
    int freq[201]={0};
    int count=0;
    for(int i=0;i<nums.size();i++){//o(n)
        freq[nums[i]+100]++;
    }
    for(int i=0;i<=200;i++){o(1)-->200 constant
       if(freq[i]>0) {
           count++;
           dub.push_back(i-100);
       }
    }
    for(int i=0;i<dub.size();i++){o(unique)<=o(n)
        nums[i]=dub[i];
    }

    return count;

}
*/
    // solution using two pointers
    // Since array is sorted, move unique elements forward in-place -->Time Complexity: O(n)
    // Space Complexity: O(1)-->No extra memory used (only a few int variables)

    /*
    int i=1,j=1;
    while(i<nums.size()){
        if(nums[i]==nums[j-1]){
            i++;
        }else{
            nums[j]=nums[i];
            i++;
            j++;
        }
    }
    return j;
}
*/
    // solution using set
    // Time Complexity:O(n log n)-->Inserting n items into set (balanced BST) = n × O(log n),Copying back = O(n)

    int k = 0;
    set<int> s(nums.begin(), nums.end());
    for (auto i : s) {
      nums[k++] = i;
    }

    return k;
  }
};