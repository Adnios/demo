//
// Created by scrutiny on 2019/10/6.
//
#include <iostream>
#include <algorithm>
using namespace std;
const int N=10000;
int parent[N];
struct node{
    int x,y,v;
}a[N];
int find(int x){
    if(parent[x]!=x){
        parent[x]=find(parent[x]);
    }
    return parent[x];
}
void unionn(int x,int y){
    int fa=find(x);
    int fb=find(y);
    if(fa!=fb){
        parent[fa]=fb;
    }
}
int cmp(node x,node y)
{
    return x.v<y.v;
}
int main(){
    int n,x,m=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            cin>>x;
            if(x!=0){
                m++;
                a[m].x=i;
                a[m].y=j;
                a[m].v=x;
            }
        }
    for(int i=0;i<=n;i++)
        parent[i]=i;
    sort(a+1,a+m+1,cmp);
    int ans=0,k=0;
    for(int i=1;i<=m;i++){
        if(find(a[i].x)!=find(a[i].y)){
            unionn(a[i].x,a[i].y);
            ans+=a[i].v;
            k++;
        }
        if(k==n-1)
            break;//找到n-1条边
    }
    cout<<ans<<endl;
    return 0;
}
