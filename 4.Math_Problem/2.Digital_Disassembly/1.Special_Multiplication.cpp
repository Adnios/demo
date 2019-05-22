//
// Created by adnois on 19-5-22.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    vector<int> n1,n2;
    while(num1){
        n1.push_back(num1%10);
        num1/=10;
    }
    while(num2){
        n2.push_back(num2%10);
        num2/=10;
    }
    int ans=0;
    for(int i=0;i<n1.size();i++){
        for(int j=0;j<n2.size();j++){
            ans+=n1[i]*n2[j];
        }
    }
    cout<<ans;
}
