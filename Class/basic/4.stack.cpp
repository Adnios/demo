#include<stdio.h>
#include<string.h>
#include<stack>
#include <queue>
#include <iostream>
using namespace std;
//计算中缀表达式
int f(char c)
{
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    if(c=='^') return 3;
    if(c=='(') return 0;
}
void  js(stack<int> &s1, stack<char> &s2)
{
    int x,y,ans=1,i;
    char ch;
    x=s1.top(); s1.pop();
    y=s1.top(); s1.pop();
    ch=s2.top(); s2.pop();
    if(ch=='+') s1.push(y+x);
    if(ch=='-') s1.push(y-x);
    if(ch=='*') s1.push(y*x);
    if(ch=='/') s1.push(y/x);
    if(ch=='^')
    {
        for(i=0;i<x;i++) ans*=y;
        s1.push(ans);
    }
}
int main(){
    char s[50];
    stack<int>  si;
    stack<char>  sc;
    cin.getline(s,50);
    int len=strlen(s),i,flag=0,temp=0;

    for(i=0;i<len;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            temp=temp*10+s[i]-'0';
            flag=1;
        }
        else
        {
            if(flag) {
                si.push(temp);
                temp=0; flag=0;
            }
            if(s[i]=='(') {
                sc.push(s[i]);
                continue;
            }
            if(s[i]==')')
            {
                while(sc.top()!='(')
                    js(si,sc);
                sc.pop();
                continue;
            }
            if(sc.empty())
                sc.push(s[i]);
            else{
                while(!sc.empty() && f(sc.top())>=f(s[i]))
                    js(si,sc);
                sc.push(s[i]);
            }
        }
    }
    if(flag) {
        si.push(temp);
        temp=0;
        flag=0;
    }
    while(!sc.empty()) js(si,sc);
    cout<<si.top();
    si.pop();
    return 0;
}