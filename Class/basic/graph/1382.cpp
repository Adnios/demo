#include<iostream>
#include<queue>
using namespace std;
const int inf = 0x3f3f3f3f;
int n, m;
struct node{
    int next, to, dis;
}s[3200000];
int head[320000];
int cnt;
void add_edge(int from, int to, int dis)
{
    s[++cnt].next = head[from];
    s[cnt].to = to;;
    s[cnt].dis = dis;
    head[from] = cnt;
}
int dis[250000];
int vis[250000];
void spfa(){
    for(int i=0;i<n+5;i++){
        dis[i]=inf;
    }
    vis[1] = 1;
    dis[1] = 0;
    queue<int> Q;
    Q.push(1);
    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();
        vis[u] = 0;
        for (int i = head[u];i!=0;i = s[i].next) {
            int to = s[i].to;
            int di = s[i].dis;
            if (dis[to]>dis[u] + di) {
                dis[to] = dis[u] + di;
                if (!vis[to]) {
                    vis[to] = 1;
                    Q.push(to);
                }
            }
        }
    }

}
int main()
{
    cin>>n>>m;
    for (int i = 0;i<m;i++) {
        int a, b, c;
        cin>>a>>b>>c;
        add_edge(a, b, c);
        add_edge(b, a, c);
    }
    spfa();
    cout<<dis[n]<<endl;
    return 0;
}