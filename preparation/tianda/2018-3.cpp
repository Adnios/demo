//
// Created by adnois on 19-7-3.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int res[3]={0};
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(v[i]*v[j]>res[0]*res[1]&&v[i]*v[i]+v[j]*v[j]==v[k]*v[k]){
                        res[0]=v[i];res[1]=v[j];res[2]=v[k];
                    }
                }
            }
        }
        cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<endl;
    }
    return 0;
}
