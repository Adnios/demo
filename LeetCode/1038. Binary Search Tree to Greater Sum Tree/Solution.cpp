//
// Created by adnois on 19-5-12.
//
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nums;
    void order(TreeNode* root){
        if(root!=NULL){
            order(root->left);
            root->val=newNum(root->val);
            order(root->right);
        }
    }
    void inorder(TreeNode* root){
        if(root!=NULL){
            inorder(root->left);
            nums.push_back(root->val);
            inorder(root->right);
        }
    }
    int newNum(int val){
        int newNum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=val){
                newNum+=nums[i];
            }
        }
        return newNum;
    }
    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* head=root;
        TreeNode* head2=root;
        inorder(root);
        order(head);
        return head2;
    }

};
