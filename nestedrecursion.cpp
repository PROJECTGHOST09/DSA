#include <iostream>
using namespace std;
int  fun(int b){
    if (b>10){
        return b-1;
    }
    else{
        return fun(fun(b+5));
    }
    return 0;
}
int main(){
    int x=11;
    cout << fun(x);
    return 0;
}