//
// Created by adnois on 19-5-20.
//
#include <iostream>
#include <queue>
using namespace std;
priority_queue<int ,vector<int> ,greater<int>> Q;//小顶堆
int main(){
    int n;
    cin>>n;
    while(n--){
        int element;
        cin>>element;
        Q.push(element);
    }
    int ans=0;
    while(Q.size()>1){//当堆中的元素大于1个
        int a=Q.top();
        Q.pop();
        int b=Q.top();
        Q.pop();
        ans+=a+b;
        Q.push(a+b);
    }
    cout<<ans;
}
