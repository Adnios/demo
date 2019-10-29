#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int mod1=100005;
int b=233317;
int nxt[500005],num[500005],sum[500005];
int tot;
char ch1[205],ch2[205];
void insert(int x){
    int tmp=x%mod1;
    nxt[++tot]=num[tmp];
    num[tmp]=tot;
    sum[tot]=x;
}
bool query(int x){
    int i;
    int tmp=x%mod1;
    for(i=num[tmp];i;i=nxt[i])
        if(sum[i]==x)
            return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        scanf("%s",ch1);
        cin.getline(ch2,205);
//        gets(ch2);
        int len=strlen(ch2);
        int sum1=0;
        for(int i=0;i<len;i++)
            sum1=((sum1*b)+(int)ch2[i]);
        if(!strcmp(ch1,"find")){
            bool flag=query(sum1);
            if(flag)
                printf("yes\n");
            else
                printf("no\n");
        }
        else insert(sum1);
    }
}