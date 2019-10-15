//后缀表达式求值
#include <iostream>
#include <cstring>
using namespace std;
int stack[101];
char s[256];
int compute(char s[256]){
	int i=0,top=0,x;
	while(i<=strlen(s)-2){
	    switch (s[i]){
	        case '+':stack[--top]+=stack[top+1];break;//int temp=stack[top+1]+stack[top];top--;stack[top]=temp;
	        case '-':stack[--top]-=stack[top+1];break;
	        case '*':stack[--top]*=stack[top+1];break;
	        case '/':stack[--top]/=stack[top+1];break;
            default:
                x=0;
                while(s[i]!=' '){
                    x=x*10+s[i++]-'0';
                }
                stack[++top]=x;
                break;
	    }
	    i++;
	}
	return stack[top];
}
int main(){
	cin.getline(s,256);
    
	cout<<compute(s);
	return 0;
}
