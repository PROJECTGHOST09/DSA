#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};
void display(Array a){
    for(int i =0;i<a.length;i++){
        cout<<a.A[i]<<"  ";
    }
}
int ls(Array *a,int key){
    for(int i= 0;i<a->length;i++){
        if(key == a->A[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    struct Array arr1={{10,20,30,40,50},10,5};
    cout<<"The element was found at "<<ls(&arr1,40)<<endl;
    display(arr1);
    return 0;
}