/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        vector<int>v;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        for(int i=0;i<n/2;i++){
            if(v[i]!=v[n-i-1])return false;
        }
        return true;
    }
};


// -----
// Could you do it in O(n) time and O(1) space?
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
  ListNode* slow=head;
        ListNode *fast=head;
        //get the middle node (slow)
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        // reverse the second half
        ListNode *prev=nullptr;
        ListNode *cur=slow;
        while(cur!=nullptr){
            ListNode* nextnode=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextnode;
        }
        
        // compare the two halves
        while(head!=nullptr&&prev!=nullptr){
            if(head->val!=prev->val)return false;
            head=head->next;
            prev=prev->next;
        }
       return true; 
    }
};