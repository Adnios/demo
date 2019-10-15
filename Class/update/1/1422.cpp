//
// Created by scrutiny on 2019/10/10.
//
#include<iostream>
#include<algorithm>
using namespace std;
int n,ans=1,t;
struct app{
    int s,e;
}a[1005];
bool cmp(app x,app y)
{
    return x.e <y.e ;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i].s>>a[i].e;
    sort(a+1,a+n+1,cmp);
    t=a[1].e ;
    for(int i=2;i<=n;i++){
        if(a[i].s >=t){
            ans++;
            t=a[i].e ;
        }
    }
    cout<<ans<<endl;
    return 0;
}
