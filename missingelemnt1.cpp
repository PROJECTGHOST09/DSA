#include <iostream>
using namespace std;
int main(){
    int arr[10]={9,10,12,13,14,15,16,17,18};
    int diff;
    diff=arr[0]-0;
    for(int i = 0 ; i<10; i++){
        if((arr[i]-i)!=diff){
            cout<<"Missing element = "<<i+diff<<endl;
            break;
        }
    }
    return 0;
}