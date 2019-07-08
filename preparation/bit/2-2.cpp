//
// Created by adnois on 19-7-8.
//
#include <iostream>
using namespace std;

int main(){

    string s1,s2;
    while(cin>>s1>>s2) {
        int ans = 0;

        for (int i = 0; i < s1.size(); i++) {
            for (int j = 0; j < s2.size(); j++) {
                if (s1[i] == s2[j]) {
                    int tempi = i, tempj = j;
                    while (s1[tempi] == s2[tempj]&&tempi<s1.size()&&tempj<s2.size()) {
                        tempi++;
                        tempj++;
                    }
                    ans = max(ans, tempi - i);
                }
            }
        }
        cout << ans<<endl;
    }
    return 0;
}
