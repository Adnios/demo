#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //先找D
        int length1=1;
        int point1=2;
        for(int i=1;i<s.size()-1;i++){
            int left=i-1,right=i+1;
            while(left>=0&&right<=s.size()-1){
                if(s[left]==s[right]){
                    left--;right++;

                }else{
                    if(right-left-1>length1){
                        length1=right-left-1;
                        point1=i+1;
                    }
                    break;
                }
            }
            if(left==-1||right==s.size()){
                if(right-left-1>length1){
                    length1=right-left-1;
                    point1=i+1;
                }
            }
        }
        if(1==point1-length1/2){
            cout<<"1"<<endl;
            cout<<point1-length1/2<<" "<<length1<<endl;
        }
        else{
            //如果有BF，那么F一定从最后一位开始
            int l=0,r=s.size()-1;
            int flag=0;
            while(l<point1-length1/2-1&&r>point1+length1/2-1){
                if(s[r]==s[l]){
                    r--;l++;
                    flag=1;
                }
                else{
                    if(flag==1){
                        break;
                    }
                    l++;
                }
            }
            if(r==s.size()-1){
                cout<<"1"<<endl;
                cout<<point1-length1/2<<" "<<length1<<endl;
            }
            else{
                cout<<"3"<<endl;
                cout<<l<<" "<<s.size()-r-1<<endl;
                cout<<point1-length1/2<<" "<<length1<<endl;
                cout<<r+2<<" "<<s.size()-r-1<<endl;
            }
        }
    }
}
