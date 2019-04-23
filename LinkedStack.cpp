//
// Created by adnois on 19-4-23.
//
#include <iostream>
#include <assert.h>

using namespace std;
struct StackNode{
public:
    int data;
    struct StackNode *link;
    StackNode(int d=0,StackNode *next=NULL):data(d),link(next){}
};
class LinkedStack{
private:
    StackNode *top;
public:
    LinkedStack():top(NULL){}
    ~LinkedStack(){makeEmpty();}
    void makeEmpty();
    void Push(int &x);
    int Pop(int &x);
    int getTop(int &x) const;
    int IsEmpty() const {return (top==NULL)? 1:0;}
    int getSize()const;
    void output();
};
void LinkedStack::makeEmpty(){
    StackNode *p;
    while(top!=NULL){
        p=top;
        top=top->link;
        delete p;
    }
}
void LinkedStack::Push(int &x){
    top=new StackNode(x,top);
    assert(top!=NULL);
}
int LinkedStack::Pop(int &x){
    if(IsEmpty()){
        return 0;
    }
    StackNode *p=top;
    top=top->link;
    x=p->data;
    delete p;
    return 1;
}
int LinkedStack::getTop(int &x)const{
    if(IsEmpty()){
        return 0;
    }
    x=top->data;
    return 1;
}
void LinkedStack::output(){
    StackNode *p=top;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->link;
    }
}
int main(){
    LinkedStack l;
    int n;
    cin>>n;
    while(n){
        int a=n%2;
        l.Push(a);
        n=n/2;
    }
    l.output();
}
