#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
int flag,t,n;
char str[15];
bool vis[maxn];//vis是为了方式出现911,91这种情况
int ch[maxn][15];
bool val[maxn];
int cnt;
void insert(char* s){
    int len = strlen(s);
    int u=1;
    for(int i=0;i<len;i++){
        int c=s[i]-'0';
        if(!ch[u][c]){
            ch[u][c]=++cnt;
        }
        u=ch[u][c];
        if(vis[cnt]==1&&i==len-1) {
            flag=1;
            return;
        }
        vis[cnt]=1;
        if(val[u]==true){
            flag=1;
            return;
        }
    }
    val[u]=true;
}
int main(){
	scanf("%d",&t);
	while(t--){
		flag=0;
		memset(ch,0,sizeof(ch));
		memset(vis,0,sizeof(vis));
		memset(val,0,sizeof(val));
		cnt=1;
		scanf("%d",&n);
		for( int i=0; i<n; i++ ){
			scanf("%s",str);
			insert(str);
		}
		if(flag)
		    printf("NO\n");
		else
		    printf("YES\n");
	}
	return 0;
}
