//
// Created by adnois on 19-4-22.
//
//顺序表
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef int T;
class SeqList{
    T *data;
    int MaxSize;
    int last;
public:
    SeqList(int sz);
    ~SeqList(){delete [] data;}
    void input();
    void output() const ;


};
SeqList::SeqList(int sz) {
    if(sz>0){
        data=new T[sz];
        if(data!=NULL){
            MaxSize=sz;
            last=-1;
        } else{
            cerr<<"存储分配错误"<<endl;
            exit(1);
        }
    }
}
void SeqList::input() {
    cout<<"请输入元素个数:";
    while(1){
        cin>>last;
        if(last<=MaxSize&&last>0)
            break;
        cout<<"元素个数有误，范围1～"<<MaxSize-1<<endl;
    }
    for(int i=0;i<last;i++){
        cout<<"请输入第"<<i+1<<"个元素:"<<endl;
        cin>>data[i];
    }
    cout<<"表建立完成"<<endl;
    last--;
}
void SeqList::output() const {
    for(int i=0;i<=last;i++){
        cout<<data[i]<<endl;
    }
}
int main(){
    SeqList l1(5),l2(5);
    l1.input();
    l1.output();
    l2.input();
    l2.output();
}
