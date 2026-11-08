#include <iostream>
using namespace std;
void funA(int n);
void funB(int n );
void funA(int n){
    if(n>0){
        cout <<n<<endl;
    
    funB(n-1);}
}
void funB(int n){
    if (n>0){
        cout<<n<<endl;
    
    funA(n-1);}
}

int main(){
    int a=3,b=3;
    funA(a);
    funB(b);
    return 0;
}