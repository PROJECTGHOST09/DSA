#include <iostream>
#define max 100
using namespace std;
struct Array{
    int  A[10];
    int size;
    int length;
};
void display(struct Array &a){
    for(int i=0;i<a.length;i++){
        cout << a.A[i]<<" ";
    }
    cout << "\n";
}
void appnd(struct Array &a,int x){
    a.A[a.length]=x;
    a.length++;
    cout<<"Element added at the end \n";
}
void insert(struct Array &a ,int index,int x){
    for(int i = a.length;i>index;i--){
        a.A[i]=a.A[i-1];
    }
    a.A[index]=x;
    a.length++;
    cout<<"Element added at "<< index << "  "<<  x<< endl;
}
void deletearr(Array *a,int index){
    int x;
    x=a->A[index];
    for(int i = index ;i<a->length;i++){
        a->A[i]=a->A[i+1];
    }
    a->length--;
    cout<<"Element successfully destroyed\n";
}
int main(){
    struct Array arr;
    arr.length=5;
    for(int i =0 ;i< arr.length;i++){
        arr.A[i]=100;
    }
    display(arr);
    appnd(arr,70);
    display(arr);
    insert(arr,3,90);
    display(arr);
    deletearr(&arr,2);
    display(arr);
    return 0;
}