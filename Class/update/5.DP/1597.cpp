#include <bits/stdc++.h>
using namespace std;
const int maxx=1000001;
long long int N,K,data[maxx],dl[maxx],id[maxx],le=1,ri;
int main(){
    scanf("%lld%lld",&N,&K);
    for(long long int i=1;i<=N;i++)
        scanf("%lld",&data[i]);
    for(long long int i=1;i<=N;i++){
        while(le<=ri&&data[i]<dl[ri])
            ri--;
        ri++;
        dl[ri]=data[i];
        id[ri]=i;
        if(id[le]+K<=i)
            le++;
        if(i>=K)
            printf("%lld ",dl[le]);
    }
    printf("\n");
    memset(dl,0x3f3f3f3f,sizeof(dl));
    le=1,ri=0;
    for(long long int i=1;i<=N;i++){
        while(le<=ri&&data[i]>dl[ri])
            ri--;
        ri++;
        dl[ri]=data[i];
        id[ri]=i;
        if(id[le]+K<=i)
            le++;
        if(i>=K)
            printf("%lld ",dl[le]);
    }
    printf("\n");
}