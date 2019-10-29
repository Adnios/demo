//
// Created by scrutiny on 10/15/19.
//
#include<bits/stdc++.h>
using namespace std;
int T;
int n,m;
int ans;
char s1[10000+10],s2[1000000+10];
unsigned long long power[1000000+10];
unsigned long long H[1000000+10];
unsigned long long s,b=27,h=1<<31;
int main(){
    power[0]=1;
    for(int i=1;i<=1000000;i++)
        power[i]=power[i-1]*b;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s%s",s1+1,s2+1);
        n=strlen(s1+1);m=strlen(s2+1);
        H[0]=0;
        for(int i=1;i<=m;i++)
            H[i]=(H[i-1]*b+(unsigned long long)(s2[i]-'A'+1))%h;
        s=0;
        for(int i=1;i<=n;i++)
            s=(s*b+(unsigned long long)(s1[i]-'A'+1))%h;
        ans=0;
        for(int i=0;i<=m-n;i++)
            if(s==H[i+n]-H[i]*power[n])
                ans++;
        printf("%d\n",ans);
    }
    return 0;
}
