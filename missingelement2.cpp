#include<iostream>
using namespace std;
int main(){
    int a[6]={11,13,15,16,17,18};
    int diff;
    diff=a[0]-0;
    for(int i=0;i<6;i++){
        if(a[i]-i !=diff){
            while(diff<a[i]-i){
                cout<<i+diff<<"  ";
                diff++;
            }
        }
    }
    return 0;
}