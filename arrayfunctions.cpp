#include <iostream>
using namespace std;
struct Array {
    int A[10];
    int size;
    int length;
};
void display(Array a){
    for(int i = 0;i<a.length;i++){
        cout << a.A[i]<<"  ";
    }
}
int get(Array a,int index){
    if(index>=0 && index<a.length){
        return a.A[index];
    }
    else{
        return -1;
    }
}
void set(Array *a,int value,int index){
    if(index>=0 && index<a->length){
        a->A[index]=value;
        cout<< "Value changed\n";
    }
}
int max(Array *a){
    int max=a->A[0];
    for(int i = 1;i< a->length;i++){
        if(a->A[i]>max){
            max=a->A[i];
        }
    }
    return max;
}
int min(Array *a){
    int min=a->A[0];
    for(int i = 1;i< a->length ; i++){
        if(a->A[i]<min){
            min=a->A[i];
        }
    }
    return min;
}
int sum(Array *a){
    int s=0;
    for(int i=0;i<a->length;i++){
        s+=a->A[i];
    }
    return s;
}
int avg(Array *a){
    return (float)sum(a)/a->length;
}
int main(){
    struct Array arr1={{10,20,30,400,90},10,5};
    display(arr1);
    cout<<endl;
    cout<<get(arr1,3);
    cout<<"\nThe largest element is "<<max(&arr1);
    cout<<"\nThe smallest element is "<<min(&arr1)<<endl;
    set(&arr1,45,1);
    cout<<"The total of the array is "<<sum(&arr1)<<endl;
    cout<<"The average of the array is "<<avg(&arr1)<<endl;
    return 0;
}