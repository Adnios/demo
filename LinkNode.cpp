//
// Created by adnois on 19-4-23.
//
#include <iostream>
using namespace std;
class List;
class LinkNode{
    friend List;
private:
    LinkNode *link;
    int data;
public:
    LinkNode(LinkNode *ptr=NULL){
        link=ptr;
    }
    LinkNode(const int &item,LinkNode *ptr=NULL){
        data=item;
        link=ptr;
    }
    ~LinkNode(){}
};
class List{
private:
    LinkNode *first;
public:
    List(){
        first=new LinkNode();
    }
    void MakeEmpty();
    ~List(){MakeEmpty();}
    void input(int EndTag);
    void output();
};

void List::input(int EndTag) {
    int val;
    LinkNode *newnode;
    cin>>val;
    while(val!=EndTag){
        newnode=new LinkNode(val);
        newnode->link=first->link;
        first->link=newnode;
        cin>>val;
    }
}

void List::output(){
    LinkNode *p=first->link;
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->link;
    }
}

void List::MakeEmpty(){
    LinkNode *p;
    while(first->link!=NULL){
        p=first->link;
        first->link=p->link;
        delete p;
    }
}


int main(){
    List l;
    l.input(0);
    l.output();
}
