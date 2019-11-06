#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    int ans=0;
    char c[100];
//    scanf("%[^\n]]",c);
//    gets(c);
    cin.getline(c,100);
    int length=strlen(c);
    for(int i=0;i<length;i++){
        if(c[i]!=' ')
            ans++;
    }
    cout<<ans;
    return 0;
}