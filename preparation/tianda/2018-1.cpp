//
// Created by adnois on 19-7-3.
//
#include <iostream>
using namespace std;
#define M 1000000007
int main(){

    long long int fab[100010];
    fab[0]=0;
    fab[1]=1;
    for(long long int i=2;i<100010;i++) {
        fab[i] = fab[i - 1] % M + fab[i - 2] % M;
    }
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        cout<<fab[a]<<endl;
    }

    return 0;
}

