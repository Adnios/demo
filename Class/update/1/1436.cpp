//
// Created by scrutiny on 2019/10/10.
//
#include<iostream>
#include<algorithm>
using namespace std;

int n,m,ans,l=0,r=0;
int a[100001];
int sum[100001];

int check(int x){
    int cnt=1,now=0;
    for(int i=1;i<=n;i++){
        if(now+a[i]<=x)
            now+=a[i];
        else{
            cnt++;
            now=a[i];
        }
    }
    return cnt<=m;
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        l=max(l,a[i]);
        r+=a[i];
    }

    while(l<=r){
        int mid=(r+l)/2;
        if(check(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    cout<<ans<<endl;
}
