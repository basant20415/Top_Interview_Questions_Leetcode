/*
time complexity:
 iterating through the list once

Inside the loop, all operations are O(1)

So the total time complexity is:O(n)
*/

/*
space complexity:
Only a few integers stored → constant space o(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];
        for(auto sell :prices){
            profit=max(profit,sell-buy);
            buy=min(buy,sell);
        }
        return profit;
    }
};