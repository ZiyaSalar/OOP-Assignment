#include <iostream>
using namespace std;

int main(){
    int a[4]={4,3,2,1};

    for(int i=0;i<4-1;i++){
        int min=i;
        for(int j=i+1;j<4;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
}