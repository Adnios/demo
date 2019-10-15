//
// Created by scrutiny on 2019/10/6.
//
#include <iostream>
using namespace std;
int V,m;
int parent[100];
int find_root(int x,int parent[]){
    int x_root=x;
    while(parent[x_root]!=-1){
        x_root=parent[x_root];
    }
    return x_root;
}
int union_vertices(int x,int y,int parent[]){
    int x_root=find_root(x,parent);
    int y_root=find_root(y,parent);
    if(x_root==y_root){
        return 0;//合并失败
    }
    else{
        parent[x_root]=y_root;
        return 1;//合并成功
    }
}
int main(){
    cin>>V>>m;
    int edges[V][2];
    for(int i=0;i<m;i++){
        cin>>edges[i][0]>>edges[i][1];
    }
    for(int i=0;i<V;i++){
        parent[i]=-1;
    }
    int flag=0;
    for(int i=0;i<m;i++){
        int x=edges[i][0];
        int y=edges[i][1];
        if(union_vertices(x,y,parent)==0){
//            cout<<x<<" "<<y<<endl;
            cout<<"Cycle detected!"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"No Cycles found"<<endl;
    }
    return 0;
}