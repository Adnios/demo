//
// Created by scrutiny on 2019/10/3.
//
#include <iostream>
using namespace std;
struct TreeNode{
    char data;
    TreeNode *leftChild,*rightChild;
    TreeNode(){
        leftChild=NULL;
        rightChild=NULL;
    }
    TreeNode(char x,TreeNode *l=NULL,TreeNode *r=NULL){
        data=x;leftChild=l;rightChild=r;
    }

};
class Tree{
private:
    TreeNode *root;
    char endTag;
    void createTree(TreeNode *&subTree);
    void preOrder(TreeNode *subTree);
    void inOrder(TreeNode *subTree);
    void postOrder(TreeNode *subTree);
    int height(TreeNode *subTree);
    int leaf(TreeNode *subTree,int &cnt);
    int node(TreeNode *subTree);
    int Find(TreeNode *subTree,int &cnt);
    void show(TreeNode *subTree,int cnt);
public:
    Tree():root(NULL){}
    Tree(char c):endTag(c),root(NULL){}
    void createTree(){
        createTree(root);
    }
    void preOrder(){
        preOrder(root);
    }
    void inOrder(){
        inOrder(root);
    }
    void postOrder(){
        postOrder(root);
    }
    int height(){
        return height(root);
    }
    int leaf(int &cnt){
        return leaf(root,cnt);
    }
    int node(){
        return node(root);
    }
    int Find(int &cnt){
        return Find(root,cnt);
    }

};
void Tree::createTree(TreeNode *&subTree){
    char c;
    cin>>c;
    if(c!=endTag){
        subTree=new TreeNode(c);
        createTree(subTree->leftChild);
        createTree(subTree->rightChild);
    }
}
void Tree::preOrder(TreeNode *subTree){
    if(subTree!=NULL){
        cout<<subTree->data<<" ";
        preOrder(subTree->leftChild);
        preOrder(subTree->rightChild);
    }
}
void Tree::inOrder(TreeNode *subTree){
    if(subTree!=NULL){
        inOrder(subTree->leftChild);
        cout<<subTree->data<<" ";
        inOrder(subTree->rightChild);
    }
}
void Tree::postOrder(TreeNode *subTree){
    if(subTree!=NULL){
        postOrder(subTree->leftChild);
        postOrder(subTree->rightChild);
        cout<<subTree->data<<" ";
    }
}
int Tree::height(TreeNode *subTree){
    if(subTree!=NULL){
        return 1+(height(subTree->leftChild)>height(subTree->rightChild)?height(subTree->leftChild):height(subTree->rightChild));
    }
    else return 0;
}
int Tree::leaf(TreeNode *subTree,int &cnt){
    if(subTree!=NULL){
        if(subTree->leftChild==NULL&&subTree->rightChild==NULL){
            cnt++;
        }
        leaf(subTree->leftChild,cnt);
        leaf(subTree->rightChild,cnt);
    }
    return cnt;
}
int Tree::node(TreeNode *subTree){
    if(subTree!=NULL){
        return 1+node(subTree->leftChild)+node(subTree->rightChild);
    }
    else return 0;
}
int Tree::Find(TreeNode *subTree,int &cnt){
    if(subTree!=NULL){
        if(subTree->data=='A'){
            cnt++;
        }
        Find(subTree->leftChild,cnt);
        Find(subTree->rightChild,cnt);
    }
    return cnt;
}

int main(){
    Tree t('@');int cnt=0,cn=0;
    t.createTree();
    t.preOrder();
    cout<<endl;
    t.inOrder();
    cout<<endl;
    t.postOrder();
    cout<<endl;
    cout<<t.height()<<endl;
    cout<<t.node()<<endl;
    cout<<t.leaf(cnt)<<endl;
    cout<<t.Find(cn)<<endl;
    return 0;
}
