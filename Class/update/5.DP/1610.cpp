#include <bits/stdc++.h>
using namespace std;
const int maxx=50010;
int N,L;
double C[maxx],sum[maxx],f[maxx];
int le=1,ri=1;
int q[maxx];
double Si(int i){
    return sum[i]+i;
}
double X(int i){
    return Si(i)+L+1;
}
double Y(int i){
    return f[i]+X(i)*X(i);
}
double slope(int i,int j){
    return (Y(i)-Y(j))/(X(i)-X(j));
}
int main(){
    scanf("%d%d",&N,&L);
    for(int i=1;i<=N;i++){
        scanf("%lf",&C[i]);
        sum[i]=sum[i-1]+C[i];
    }
    le=ri=1;
    for(int i=1;i<=N;i++){
        while(le<ri&&slope(q[le],q[le+1])<2*Si(i))
            le++;
        f[i]=f[q[le]]+(Si(i)-X(q[le]))*(Si(i)-X(q[le]));
        while(le<ri&&slope(i,q[ri-1])<slope(q[ri-1],q[ri]))
            ri--;
        q[++ri]=i;
    }
    printf("%lld\n",(long long)f[N]);
}