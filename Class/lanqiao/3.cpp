#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    string str[n+5];
    for(int i=1;i<=n;i++){
        cin>>str[i];
    }
    int a[m+1];
    while(1){
        for(int i=1;i<=m;i++){
            if(a[i]!=-1)
                a[i]=0;
        }
        for(int i=1;i<=n;i++){
            string s=str[i];
            for(int j=0;j<s.size();j++){
                int t=s[j]-'0';
                if(t==0)
                    break;
                else{
                    if(a[t]!=-1){
                        a[t]++;
                        break;
                    }
                }
            }
        }
        int minn=m+1,maxx=0;
        for(int i=1;i<=m;i++){
            if(a[i]>=0){
                minn=min(minn,a[i]);
                maxx=max(maxx,a[i]);
            }
        }
        if(maxx>minn){
            for(int i=1;i<=m;i++){
                if(a[i]==minn){
                    a[i]=-1;
                }
            }
        }
        else{
            int count=0;
            int dx=0;
            for(int i=1;i<=m;i++){
                if(a[i]==maxx){
                    count++;
                    dx=i;
                }
            }
            if(count>1){
                cout<<-maxx;
            }else{
                cout<<dx;
            }
            break;
        }
    }
}