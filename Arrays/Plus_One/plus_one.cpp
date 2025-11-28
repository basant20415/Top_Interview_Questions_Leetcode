class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       /* int carry=1;
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            int sum=digits[i]+carry;
            digits[i]=sum%10;
            carry=sum/10;
        }
        if(carry>0)digits.insert(digits.begin(),carry);
        return digits;
        */
        int idx=digits.size()-1;
        while(idx>=0){
            if(digits[idx]==9)digits[idx]=0;
            else {
                digits[idx]+=1;
                return digits;
            }
            idx--;
        }
    digits.insert(digits.begin(),1);
        return digits;
        
    }
};