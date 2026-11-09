#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void display(Array a){
    for(int i =0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }
}
void merge(Array *a,Array *b,Array *c){
    int i=0,j=0,m,n,k=0;
    m=a->length;
    n=b->length;
    while(i<m && j<n){
        if(a->A[i]<b->A[j]){
            c->A[k]=a->A[i];
            i++;
            k++;
        }
        else{
            c->A[k]=b->A[j];
            j++;
            k++;
        }
    }
    for(;i<m;i++){
        c->A[k]=a->A[i];
        k++;
    }
    for(;j<n;j++){
        c->A[k]=b->A[j];
        k++;
    }

}
int main(){
    struct Array arr1={{10,30,50,70,90},10,5};
    struct Array arr2={{20,40,60,80,100},10,5};
    struct Array arr3={{},(arr1.size+arr2.size),(arr1.length+arr2.length)};
    merge(&arr1,&arr2,&arr3);
    display(arr3);
    return 0;
}