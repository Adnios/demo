//
// Created by adnois on 19-7-8.
//
//输入带空格的字符串
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    char s[100];
    while(cin.getline(s,100)){//scanf("%[^\n]",s)!=EOF不能实现循环输入的效果
        string str;
        vector<string> v;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]!=' '){
                str+=s[i];
            }else{
                v.push_back(str);
                str="";
            }
        }
        v.push_back(str);
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i];
            if(i){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}