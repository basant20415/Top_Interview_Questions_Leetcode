class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    /*//time limit exceeded
    Operations inside the loop:
   1️⃣ nums.pop_back() → O(1)
   2️⃣ nums.insert(nums.begin(), x) → O(n)

Because inserting at the front of a vector shifts all elements to the right.

So each iteration costs O(n).

You run this loop k times → total cost:
❌ O(n × k)

    int n=nums.size();
    k=k%n;
    while(k--){
        int x=nums.back();
        nums.pop_back();
        nums.insert(nums.begin(),x);
    }

    */
    /*
    reversing is done in place
    Time complexity = O(n)
    Space complexity = O(1)

    int n=nums.size();
    k=k%n;
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());

        */

    /*
    this is better than vector-insert, because:
    deque.pop_back() → O(1)
    deque.push_front() → O(1)
    So each rotation is O(1) instead of O(n).
    But the total still becomes:
    ❗ O(k) rotations
    If k = 100000, this is fine.
    But if n and k are both big (up to 100000), this approach still works within time for C++ because 100k operations is okay.

    int n=nums.size();
    k=k%n;
    deque<int>dq(nums.begin(),nums.end());
    for(int i=0;i<k;i++){
        int x=dq.back();
        q.pop_back()
        dq.push_front(x);
    }
    for(int i=0;i<nums.size();i++){
        nums[i]=dq[i];
    }
    }
    */
    // sliding window
//     Time: O(n)
// Space: O(n) extra vector

    int n = nums.size();
    k = k % n;
    vector<int> temp;
    temp.insert(temp.end(), nums.end() - k, nums.end());
    temp.insert(temp.end(), nums.begin(), nums.end() - k);
    nums = temp;
  }
};