//
// Created by adnois on 19-7-22.
//
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!='>')
                sum++;
        }
        for(int i=s.size()/2+1;i<s.size();i++){
            if(s[i]!='<')
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
