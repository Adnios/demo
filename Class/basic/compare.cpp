//
// Created by scrutiny on 2019/10/4.
//
//简单、中等、难度；如何选择三个题
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int min=abs(v[1]*2-v[2]-v[0]);
    int current=0;
    int x=0,y=1,z=2;
    for(int i=1,j=i+1,k=i-1;i<v.size()-1;i++){
        if(abs(v[i]*2-v[j]-v[k])<=min){
            min=abs(v[i]*2-v[j]-v[k]);
            x=k;y=i;z=j;
        }
        while(k>0){
            k--;
            if(abs(v[i]*2-v[j]-v[k])<=min){
                min=abs(v[i]*2-v[j]-v[k]);
                x=k;y=i;z=j;
            }
        }
        while(j<v.size()-1){
            j++;
            if(abs(v[i]*2-v[j]-v[k])<=min){
                min=abs(v[i]*2-v[j]-v[k]);
                x=k;y=i;z=j;
            }
        }
    }
    cout<<v[x]<<" "<<v[y]<<" "<<v[z]<<endl;
}
