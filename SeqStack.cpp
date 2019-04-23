//
// Created by adnois on 19-4-23.
//
#include <iostream>
#include <assert.h>

using namespace std;
class SeqStack{
private:
    int *elements;
    int top;
    int maxSize;
    void overflowProcess();
public:
    SeqStack(int sz=50);
    ~SeqStack(){delete []elements;}
    void Push(int &x);
    int Pop(int &x);
    int getTop(int &x);
    int IsEmpty()const {return top==-1;}
    int IsFull()const{return top==maxSize-1;}
    int getSize()const{return top+1;}
    void MakeEmpty(){top=-1;}
    void output();
};

SeqStack::SeqStack(int sz){
    elements=new int(sz);
    assert(elements!=NULL);
    top=-1;
    maxSize=sz;
}
void SeqStack::overflowProcess(){
    int *newArray=new int[2*maxSize];
    for(int i=0;i<=top;i++){
        newArray[i]=elements[i];
    }
    maxSize+=maxSize;
    delete []elements;
    elements=newArray;
}
void SeqStack::Push(int &x){
    if(IsFull()){overflowProcess();}
    elements[++top]=x;
}
int SeqStack::Pop(int &x){
    if(IsEmpty()){
        return 0;
    }
    x=elements[top--];
    return x;
}
int SeqStack::getTop(int &x){
    if(IsEmpty()){
        return 0;
    }
    x=elements[top];
    return 1;
}
void SeqStack::output(){
    for(int i=0;i<=top;i++){
        cout<<"i:"<<i<<" "<<elements[i]<<endl;
    }
}
int main(){
    SeqStack s;
    while(1){
        int i;
        cin>>i;
        if(i==0){
            break;
        }
        s.Push(i);
    }
    s.output();
    //    SeqStack seqStack(10);//此时是数组
//    seqStack->output();
}
