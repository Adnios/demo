#include <bits/stdc++.h>
#define maxl 1000000+1
#define mod 1000000007
using namespace std;
int f[maxl],t[maxl];
int n;
string s;
int main() {
    scanf("%d",&n);
    while(n--){
        cin>>s;
        f[0]=-1;
        f[1]=0;
        t[0]=0;
        t[1]=1;
        int j=0;
        long long ans=1;
        for(int i=1;i<s.length();i++) {
            while(j>=0&&s[i]!=s[j]) j=f[j];
            f[i+1]=++j;
            t[i+1]=t[j]+1;
        }
        for(int i=0;i<s.length();i++){
            cout<<f[i]<<" ";
        }cout<<endl;
        for(int i=0;i<s.length();i++){
            cout<<t[i]<<" ";
        }cout<<endl;
        j=0;
        for(int i=1;i<s.length();i++) {
            while(j>=0&&s[i]!=s[j])
                j=f[j];
            j++;
            while((j<<1)>(i+1))
                j=f[j];
            ans*=(long long)t[j]+1;
            ans%=mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}