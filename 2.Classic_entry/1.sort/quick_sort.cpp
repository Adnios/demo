//
// Created by scrutiny on 2019/10/6.
//
#include <iostream>
using namespace std;
int Partition(int A[],int low,int high){
    int pivot=A[low];
    while(low<high){                  //27,38,13,49,76,97,65,50
        while(low<high&&A[high]>=pivot)
            --high;
        A[low]=A[high];
        while(low<high&&A[low]<=pivot)
            ++low;
        A[high]=A[low];
    }
    A[low]=pivot;
    for(int i=0;i<=7;i++){
        cout<<A[i]<<" ";
    }cout<<endl;
    return low;
}
int main(){
    int A[]={49,38,65,97,76,13,27,50};
    cout<<Partition(A,0,7);

}
