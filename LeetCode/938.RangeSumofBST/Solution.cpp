//
// Created by adnois on 19-5-20.
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
// 中序遍历一遍
class Solution {
public:
    int sum=0;
    void inOrder(TreeNode* root,int L,int R){
        if(root!=NULL){
            inOrder(root->left,L,R);
            if(root->val>=L&&root->val<=R){
                sum+=root->val;
            }
            inOrder(root->right,L,R);
        }

    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        inOrder(root,L,R);
        return sum;
    }
};
