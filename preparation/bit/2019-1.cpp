//
// Created by adnois on 19-7-26.
//
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+5][m+5];
    for(int i=0;i<n+5;i++){
        for(int j=0;j<m+5;j++) {
            a[i][j] = 0;
        }
    }
    
    return 0;
}
