//
// Created by scrutiny on 10/12/19.
//
#include<iostream>
const int N = 1000000+5;
using namespace std;
int res;
int a[N];
int n,k;
void dfs(int sum,int step){
    if(step==k){
        if(sum>=a[step-1])
            res++;
        return;
    }
    for(int i=a[step-1];i<=sum/(k-step+1);i++){
        a[step]=i;
        sum-=i;
        dfs(sum,step+1);
        sum+=i;
    }
}
int main() {
    cin>>n>>k;
    a[0]=1;
    dfs(n,1);
    cout<<res<<endl;
    return 0;
}
