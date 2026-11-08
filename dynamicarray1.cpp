#include <iostream>
using namespace std;
int main(){
    int *p=new int[5];
    p[0]=10;
    p[1]=20;
    p[2]=30;
    p[3]=140;
    p[4]=107;
    int *q=new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p; // delloctaing the old pointer.
    p=q;//setting the original pointer as the  new pointer.
    q=NULL;// setting the new pointer to null as p already took the pointer for q.
    for(int i =0 ; i<10;i++){
        cout<<p[i]<<endl;
    }
}