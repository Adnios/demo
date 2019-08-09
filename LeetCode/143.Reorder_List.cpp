//
// Created by adnois on 19-8-9.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //取中点，后半部分翻转，交叉
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL)
            return ;
        ListNode* slow=head,*fast=head->next;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* right=reverse(slow->next);
        slow->next=NULL;
        ListNode* left=head;
        while(right){
            ListNode* next=right->next;
            right->next=left->next;
            left->next=right;
            right=next;
            left=left->next->next;
        }
    }
    ListNode* reverse(ListNode* slow){
        ListNode* prev=NULL;
        while(slow){
            ListNode* next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        return prev;
    }
};
