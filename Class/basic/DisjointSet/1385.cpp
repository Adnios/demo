//
// Created by scrutiny on 2019/10/6.
//
#include <iostream>
using namespace std;
int a[1009];
int f[1009];
int find(int x){
    if(f[x]!=x)
        f[x]=find(find(f[x]));
    return f[x];
}
void unionn(int r1,int r2){
    int t1=find(r1);
    int t2=find(r2);
    f[t1]=t2;
}
int main(){
    int ans=0;
    int m,n;
    cin>>n>>m;
    int x,y,z;
    for(int i=1;i<=n;i++){
        f[i]=i;
    }
    for(int i=1;i<=m;i++){
        cin>>x>>y>>z;
        if(x==0){
            unionn(y,z);
        }
        else{
            if(a[y]==0){
                a[y]=z;
            }
            if(a[z]==0){
                a[z]=y;
            }
            unionn(z,a[y]);
            unionn(y,a[z]);
        }
    }
    for(int i=1;i<=n;i++){
        if(f[i]==i)
            ans++;
    }
    cout<<ans;
}
