//
// Created by scrutiny on 2019/10/4.
//
#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
int n;
priority_queue<int,vector<int>,greater<int> > h;//升序排列，小顶堆
//priority_queue<int, vector<int>, less<int> > a;降序排列，大顶堆
void work(){
    int i,x,y,ans=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        h.push(x);
    }
    for(i=1;i<n;i++){
        x=h.top();h.pop();
        y=h.top();h.pop();
        ans+=x+y;
        h.push(x+y);
    }
    cout<<ans<<endl;
}

int main(){
    work();
    return 0;
}
