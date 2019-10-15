//
// Created by scrutiny on 10/12/19.
//
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int T,test,n;
double a[10005],b[10005],c[10005];
double x,L,r,Lmid,rmid;
double cal(double x){
    int i;
    double maxx=-0x7fffffff;
    for(i=1;i<=n;i++)
        maxx=max(maxx,a[i]*x*x+b[i]*x+c[i]);
    return maxx;
}
int main(){
    int i;
    cin>>T;
    for(test=1;test<=T;test++){
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>a[i]>>b[i]>>c[i];
        L=0;r=1000;
        while(L+1e-11<r){
            Lmid=L+(r-L)/3;
            rmid=r-(r-L)/3;
            if(cal(Lmid)<=cal(rmid))
                r=rmid;
            else
                L=Lmid;
        }
        printf("%.4lf\n",cal(L));
    }
    return 0;
}