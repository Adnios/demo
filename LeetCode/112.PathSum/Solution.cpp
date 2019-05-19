//
// Created by adnois on 19-5-19.
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
 /**
  * 通过前序遍历，将所有路径保存到pathList，单条路径保存到path。
  * 最后判断pathList中是否有符合要求的路径
  * */
class Solution {
public:
    vector<int> path;
    vector<vector<int>> pathList;
    void preOrder(TreeNode* root){
        if(root!=NULL&&root->left==NULL&&root->right==NULL){
            path.push_back(root->val);
            pathList.push_back(path);
            path.pop_back();
        }
        else{
            if(root!=NULL){
                path.push_back(root->val);
                preOrder(root->left);
                preOrder(root->right);
                path.pop_back();
            }
        }
    }
    bool getAns(int sum){
        for(int i=0;i<pathList.size();i++){
            int temp=0;
            for(int j=0;j<pathList[i].size();j++){
                temp+=pathList[i][j];
            }
            if(temp==sum){
                return true;
            }
        }
        return false;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        preOrder(root);
        bool ans=getAns(sum);
        return ans;
    }
};

