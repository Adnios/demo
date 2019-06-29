//
// Created by adnois on 19-6-29.
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
    bool isPalindrome(ListNode* head) {
        ListNode* p=head;
        vector<int> n;
        while(p){
            n.push_back(p->val);
            p=p->next;
        }
        for(int i=0;i<n.size()/2;i++){
            if(n[i]!=n[n.size()-1-i]){
                return false;
            }
        }
        // if(n.size()/2==0){
        //     for(int i=0;i++;i<n.size()/2){
        //         if(n[i]!=n[n.size()-i]){
        //             return false;
        //         }
        //     }
        // }else{
        //     for(int i=0;i++;i<n.size()/2){
        //         if(n[i]!=n[n.size()-i]){
        //             return false;
        //         }
        //     }
        // }
        return true;
    }
};
