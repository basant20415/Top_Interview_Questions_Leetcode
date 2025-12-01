class Solution {
public:
    bool isPalindrome(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
            if(isalpha(s[i])||isdigit(s[i]))v.push_back(s[i]);
            //  if(isalnum(s[i]))v.push_back(s[i]); //alphanumeric -->number or letter
        }
        int l=0,r=v.size()-1;
     while(l<r){
         if(v[l]!=v[r])return false;
         l++,r--;
     }
        return true;
        
    }
};