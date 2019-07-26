//
// Created by adnois on 19-7-26.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    int ans=0;
    vector<int> v;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        if(n>=v[i]){
            ans++;
            n-=v[i];
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
