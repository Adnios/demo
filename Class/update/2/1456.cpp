#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
using namespace std;
typedef unsigned long long ull;
map<ull,int> mp;
ull b=27,mod=1<<31;
char op[205],str[205];
int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        scanf("%s",op);
//        cin.getline(str,205);
        scanf("%[^\n]]",str);
//        gets(str);//必须用这个，不然最后一个测试点会超时
        int len=strlen(str);
        ull s=0;
        for( int i=0; i<len; i++ ){
            s=(s*b+(ull)(str[i]-'\0'))%mod;
        }
        if(!strcmp(op,"find")){
            if(mp[s]==1)
                printf("yes\n");
            else
                printf("no\n");
        }
        else{
            mp[s]=1;
        }
    }
}