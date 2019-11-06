#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a,long long b,long long k){
    long long res=1;
    while(b>0){
        if(b&1){
            res*=a;res=res%k;
        }
        a=a*a;
        a=a%k;
        b>>=1;
    }
    return res;
}
int main(){
    long long a,b,k;
    cin>>a>>b>>k;
    cout<<a<<'^'<<b<<' '<<"mod"<<' '<<k<<'='<<binpow(a,b,k)%k<<endl;
    return 0;
}