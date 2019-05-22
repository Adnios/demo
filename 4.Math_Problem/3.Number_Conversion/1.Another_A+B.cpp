//
// Created by adnois on 19-5-22.
//
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int m;
    int a,b;
    vector<int> ans;
    cin>>m>>a>>b;
    a=a+b;
    while(a){
        ans.push_back(a%m);
        a/=m;
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
}

