//
// Created by adnois on 19-7-8.
//
#include <iostream>
using namespace std;

string shift(string s){
    int temp=s[0];
    for(int i=0;i<s.size()-1;i++){
        s[i]=s[i+1];
    }
    s[s.size()-1]=temp;
    return s;
}
int main(){
    string s;
    while(cin>>s){
        int sum=0;
        string tmps=s;
        for(int i=0;i<s.size();i++){
            tmps=shift(tmps);
            cout<<tmps<<" "<<s<<endl;
            if(tmps==s){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
