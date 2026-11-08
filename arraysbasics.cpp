#include <iostream>
using namespace std;
int main(){
    int a[5]={1,10,15,17,19};
    for(int i=0;i<5;i++){
        cout << a[i]<<endl;
    }
    int *p=new int{5};
    p[0]=10;
    p[1]=20;
    p[2]=30;
    p[3]=50;
    p[4]=70;
    for(int i=0;i<5;i++){
        cout << a[i]<<endl;
    }
    return 0;
}