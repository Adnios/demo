#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
//括号匹配
using namespace std;
char str[10000];
stack<int> S;//用1代表(，2代表)，3代表[，4代表]
int main(){
    cin>>str;
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')//记录左圆括号
            S.push(1);
        else if(str[i]==')')//记录右圆括号
        {
            if(S.empty())//栈为空
                S.push(2);
            else if(S.top()==1)
                S.pop();
            else
                S.push(2);
        }
        else if(str[i]=='[')//记录左方括号
            S.push(3);
        else if(str[i]==']')//记录右方括号
        {
            if(S.empty())//栈为空
                S.push(4);
            else if(S.top()==3)
                S.pop();
            else
                S.push(4);
        }
    }
    if(S.empty())
        printf("OK");
    else
        printf("Wrong");
    return 0;
}