//
// Created by adnois on 19-7-8.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    char a[50];
    while(cin.getline(a,50)){
        vector<string> v;
        string s;
        for(int i=0;a[i]!='\0';i++){
            if(a[i]!=',')
                s+=a[i];
            else{
                v.push_back(s);
                s="";
            }

        }
        v.push_back(s);
        vector<int> vector;
        for(int i=0;i<v.size();i++){
            int n=0;
            int k=0;
            while(k<v[i].size()){
                n=n*10+v[i][k]-'0';
                k++;
            }
            vector.push_back(n);
        }
        int flag=0;
        for(int i=vector.size()-1;i>0;i--){
            if(flag==1)
                break;
            for(int j=i-1;j>=0;j--){
                if(vector[i]==vector[j]){
                    cout<<vector[i]<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            cout<<-1<<endl;
    }

    return 0;
}
