#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size ;
    int length;
};
int bs(Array *a,int key){
    int l,h,m;
    l=0;
    h=a->length-1;
    while(l<=h){
        m=(l+h)/2;
        if (key==a->A[m]){
            return m;}
        else if (key<a->A[m]){
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    return -1;
}
int main(){
    struct Array arr1={{20,30,40,50,60},10,5};
    cout<<"The Element to be searched was found at "<<bs(&arr1,60)<<endl;
    return 0;
}