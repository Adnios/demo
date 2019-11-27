//
// Created by scrutiny on 2019/10/3.
//
#include <iostream>
#include <string>
#include <stack>
//括号匹配
using namespace std;

stack <int> s;

int main(){
    string v;
    bool flag=false;
    cin>>v;
    for (int i=0;i<=v.length();i++){
        char t=v[i];
        if (t=='@')
            break;
        if (t=='(')
            s.push(1);
        else if (t==')'&&s.size())
            s.pop();
        else if (t==')'&&!s.size())
            flag=true;
    }
    if (s.size())
        flag=true;
//    cout<<flag;
    string ans=flag?"NO":"YES";
    cout<<ans<<endl;
    return 0;
}
