//
// Created by adnois on 19-5-25.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* p=head;
        ListNode* q=head;
        int i=0;
        vector<int> nums;
        while(p){
            i++;
            if(m<=i&&i<=n){
                nums.push_back(p->val);
            }
            p=p->next;
        }
        i=0;
        int k=nums.size()-1;
        while(q){
            i++;
            if(m<=i&&i<=n){
                q->val=nums[k];
                k--;
            }
            q=q->next;
        }
        return head;
    }
};
