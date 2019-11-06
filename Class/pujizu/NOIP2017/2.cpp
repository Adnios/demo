#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int n,q,book[6666],len[6666],num[6666];
int main(){
    cin>>n>>q;
    for(int i=1; i<=n; i++)
        cin>>book[i];
    sort(book+1,book+n+1);
    for(int i=1; i<=q; i++) {
        cin>>len[i]>>num[i];
        int tmp = pow(10,len[i]),min = 10000001;
        for(int j=1; j<=n; j++)
            if(book[j] % tmp == num[i] ) {
                min=book[j];
                break;
            }

        if(min != 10000001)
            cout<<min<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
