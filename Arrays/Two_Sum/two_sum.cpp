class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   //      int i=0,j=nums.size()-1;
   //      vector<pair<int,int>>v;
   //      int n=nums.size();
   //     v.reserve(n);
   //      for(int i=0;i<n;i++){
   //        v.push_back({nums[i],i});
   //      }
   //      sort(v.begin(),v.end());
   //      while(i<j){
   //          if(v[i].first+v[j].first>target)j--;
   //          else if (v[i].first+v[j].first<target)i++;
   //                   else {
   //                    return {v[i].second,v[j].second};
   //                   }
   //      }
   // return {};
//         -----------------
      unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){ 
           
            int need=target-nums[i];
            if(mp.count(need)){
                return {mp[need],i};
            }
             mp[nums[i]]=i;
               }
        
        return {};
       
        
    }
};

