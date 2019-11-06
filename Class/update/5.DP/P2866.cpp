#include<stack>
#include<iostream>
#include <cstdio>
using namespace std;
stack<int> s;
int a[80005],data[80005];
long long ans;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>data[i];
        while(!s.empty()&&data[s.top()]<=data[i]){
            a[s.top()]=i-s.top()-1;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        a[s.top()]=n-s.top()-1;
        s.pop();
    }
    for(int i=0;i<n;i++){
        ans+=a[i];
    }
    printf("%lld",ans);
    return 0;
}
