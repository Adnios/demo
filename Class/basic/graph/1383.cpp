//
// Created by scrutiny on 2019/10/6.
//
#include <iostream>

using namespace std;
int n;
int mapp[1000][1000];
int p[1000];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) p[i]=i;
    for(int i=1;i<=n;i++){
        int x;
        while(cin>>x&&x!=0){
            mapp[i][x]=1;
        }
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                mapp[i][j]=mapp[i][j]||(mapp[i][k]&&mapp[k][j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(mapp[i][j]){
                p[j]=p[i];//这个思想和并查集的思想很类似，也就是说p[i]是p[j]的父节点了
            }
        }
    }

    int cnt=0;
    for(int i=1;i<=n;i++){
        if(p[i]==i){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
