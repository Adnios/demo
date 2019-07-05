//
// Created by adnois on 19-7-3.
//
#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]<='Z'&&s[i]>='A'){
                s[i]=s[i]+32;
            }
            else {
                s[i]=s[i]+1;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
