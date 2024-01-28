/*
Operation on Array:
    Create an Array
    Display an Array
    Swap Element of Array
*/

/*
Name: Sayyad Ziyaulhusen Salar
Roll no.: 22266
Title: Sorting Array using "Selection Sort"
*/



#include <iostream>
#include <iomanip>
using namespace std;

int* create(int); // size of array as an argument 
void display(int*,int); // pointer to array and size as an argument
void swap(int*, int*); // pointer to two element as an argument
void selsort(int*, int); 

int main(){
    cout<<"Array sorting using \"Seleciton Sort\": "<<endl;
    do{
        int n;
        cout<<"\nEnter size of an Array: ";
        cin>>n;
        int*p=create(n);
        cout<<endl;
        cout<<"Entered Array is: "<<endl;
        display(p,n);
        cout<<endl;
        cout<<"Sorted Array is: "<<endl;
        selsort(p,n);
        display(p,n);
        int ch;
        cout<<"do you want to perform Operation Again ? (yes=1/no=0): ";
        cin>>ch;
        if(ch==0){
            delete []p;
            p=nullptr;
            break;
        }
    }while(1);
    cout<<endl;
    cout<<"Thank You !!!"<<endl;
}

// function of creating an Array dynamically of size n: 
int* create (int n){
    int*p= new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element for index "<<i<<": ";
        cin>>*(p+i);
    }
    return p;
}

// function to Display array with its index and Adress: 
void display(int* p,int n){
    cout<<"Index"<<setw(10)<<"Element"<<setw(10)<<"Adress"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(3)<<"a["<<i<<"]"<<setw(7)<<*(p+i)<<setw(15)<<(p+i)<<endl;
    }
}

// function to Swap to element of Array using pointer: 
void swap(int*p, int*q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

// fuction to sorting Array using "Selection Sort: "
void selsort(int*p,int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(*(p+j)<*(p+min)){
                min=j;
            }
        }
        if(min!=i){
            swap(p+min,p+i);
        }
    }
}
