#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a[7]={64,88,22,45,22,11};
    cout<<"Index"<<setw(10)<<"Element"<<setw(10)<<"Adress"<<endl;
    for(int i=0;i<7;i++){
        cout<<setw(3)<<"a["<<i<<"]"<<setw(7)<<a[i]<<setw(15)<<&a[i]<<endl;
    }
}

