#include <iostream>
using namespace std;

int main(){
    int a[5]={5,4,3,2,1};
    for(int i=1;i<5;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}