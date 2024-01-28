/*Operation on Array:
    Create an Array
    Display an Array
    Swap Element of Array
    */



#include <iostream>
#include <iomanip>
using namespace std;

int* create(int); // size of array as an argument 
void display(int*,int); // pointer to array and size as an argument
void swap(int*, int*); // pointer to two element as an argument
void bblsort(int*,int); // Bubble Sort
void insort(int*,int); // Insertion Sort
void selsort(int*, int); // Selection Sort

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int*p=create(n);
    cout<<endl;
    display(p,n);
    // swap(p,p+1);
    // cout<<endl;
    // display(p,n);
    cout<<endl;
    // bblsort(p,n);
    // insort(p,n);
    selsort(p,n);
    display(p,n);
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

void swap(int*p, int*q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

void bblsort(int*p,int n){
    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<=n-1-i;j++){
            if(*(p+j)>*(p+j+1)){
                cout<<*(p+j)<<" "<<*(p+j+1)<<" ";
                swap(p+j,p+j+1);
                cout<<*(p+j)<<" "<<*(p+j+1);
                cout<<endl;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}

void insort(int* p,int n){
    for(int i=1;i<n;i++){
        int temp=*(p+i);
        int j=i-1;
        while(j>=0 && *(p+j)>temp){
            *(p+j+1)=*(p+j);
            j--;
        }
        *(p+j+1)=temp;
    }
}

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
