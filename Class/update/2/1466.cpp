#include <bits/stdc++.h>
using namespace std;
int m,nextt[1000005];
char s[1000005];
void getNext(){
    nextt[0]=0;
    int len=0;
    int i=1;
    while(i<m){
        if(s[i]==s[len]){
            len++;
            nextt[i]=len;
            i++;
        }
        else{
            if(len>0){
                len=nextt[len-1];
            }
            else{//避免死循环
                nextt[i]=len;
                i++;
            }
        }
    }
}
int main(){
    while(scanf("%s",s)){
        if (s[0]=='.')
            break;
        m=strlen(s);
        getNext();
        printf("%d\n",m % (m-nextt[m-1]) == 0 ?m / (m-nextt[m-1]) : 1 );
    }
}