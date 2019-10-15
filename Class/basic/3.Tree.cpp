//
// Created by scrutiny on 2019/10/4.
//
#include <iostream>
using namespace std;

struct TreeNode{
    int data;
    TreeNode *leftChild,*rightChild;
    TreeNode(){
        leftChild=NULL;
        rightChild=NULL;
    }
    TreeNode(int x,TreeNode *l=NULL,TreeNode *r=NULL){
        data=x;leftChild=l;rightChild=r;
    }
};
class Tree{
private:
    void createTree(TreeNode *&subTree){
        int c;
        cin>>c;
        if(c!=endTag){
            subTree=new TreeNode(c);
            createTree(subTree->leftChild);
            createTree(subTree->rightChild);
        }
    }
    void show(TreeNode *subTree){
        if(subTree!=NULL){
            cout<<subTree->data<<" ";
            show(subTree->leftChild);
            show(subTree->rightChild);
        }
    }
public:
    TreeNode *root;
    int endTag;
    Tree():root(NULL){}
    Tree(int c){
        endTag=c;root=NULL;
    }
    void createTree(){
        createTree(root);
    }
    void show(){
        show(root);
    }
};

bool isMirror(TreeNode* left,TreeNode* right){
    if(left==NULL&&right==NULL)
        return true;
    if(left==NULL||right==NULL)
        return false;
    return (left->data==right->data)&&isMirror(left->rightChild,right->leftChild)&&isMirror(left->leftChild,right->rightChild);
}
bool isSymmetric(TreeNode* root) {
    return isMirror(root,root);
}


int main(){
    Tree t(0);
    t.createTree();
    t.show();
    cout<<endl;
    cout<<isSymmetric(t.root);
}