#include <iostream>
#include <stdlib.h>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void display(Array a){
    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<"\n";
    }
}
void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void reverse(Array *a){
    for(int i = 0, j = a->length - 1; i < j; i++, j--){
        swap(&a->A[i], &a->A[j]);
    }
}

int main(){
    Array arr={{2,1,3,4,5,7},10,6};
    reverse(&arr);
    display(arr);
    return 0;
}