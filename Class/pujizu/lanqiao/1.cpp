#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,s;
    string str;
    cin>>h>>s>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='u'){
            if(s>0){
                s--;
            }
        }
        else{
            if(s<h){
                s++;
            }
        }
    }
    cout<<s;
}