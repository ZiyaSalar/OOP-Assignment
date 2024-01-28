#include <iostream>
using namespace std;

int main(){
    int a[7]={23,12,54,11,33,54,334};
    for(int i=1;i<7;i++){
        int flag=0;
        for(int j=0;j<7-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}