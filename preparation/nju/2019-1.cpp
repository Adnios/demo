//
// Created by adnois on 19-7-12.
//
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    int a[s][s];
    for(int i=0;i<s;i++)
        for(int j=0;j<s;j++)
            a[i][j]=0;

    while(cin>>n){
        if(n==3){
            break;
        }

        else if(n==1){
            int x,y,aa;
            cin>>x>>y>>aa;
            a[x][y]+=aa;
        }
        else{//n=2
            int l,b,r,t;
            cin>>l>>b>>r>>t;
            int sum=0;
            if(l>r)
                swap(l,r);
            if(b>t)
                swap(b,t);
            for(int i=l;i<=r;i++)
                for(int j=b;j<=t;j++)
                    sum+=a[i][j];
            cout<<sum<<endl;
        }
    }

    return 0;
}
