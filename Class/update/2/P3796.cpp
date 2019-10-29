#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+6;
int tr[N][26], tot;
int e[N], fail[N];
void insert(char *s) {
    int u = 0;
    for (int i = 1; s[i]; i++) {
        if (!tr[u][s[i] - 'a']) tr[u][s[i] - 'a'] = ++tot;
        u = tr[u][s[i] - 'a'];
    }
    e[u]++;
}
queue<int> q;
void build() {
    for (int i = 0; i < 26; i++)
        if (tr[0][i]) q.push(tr[0][i]);
    while (q.size()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < 26; i++) {
            if (tr[u][i])
                fail[tr[u][i]] = tr[fail[u]][i], q.push(tr[u][i]);
            else
                tr[u][i] = tr[fail[u]][i];
        }
    }
}
int query(char *t) {
    int u = 0, res = 0;
    for (int i = 1; t[i]; i++) {
        u = tr[u][t[i] - 'a'];  // 转移
        for (int j = u; j && e[j] != -1; j = fail[j]) {
            res += e[j], e[j] = -1;
        }
    }
    return res;
}
int main() {
    int n;
    scanf("%d", &n);
    char s1[N];
    for (int i = 1; i <= n; i++) {
        scanf("%s", s1 + 1);
        insert(s1);
    }
    char s2[N];
    scanf("%s", s2 + 1);
    build();
    printf("%d\n", query(s2));
    return 0;
}