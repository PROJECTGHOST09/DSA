#include <iostream>
using namespace std;
int main(){
    // 1.
    int a[2][3]={
        {1,2,3},
        {5,6,7}
    };// the first part is 2 in this case it would be row and the other part would be column.
    //2. POinter
    int *C[2];
    C[0]=new int[3];
    C[1]=new int [3];
    C[0][0]={10};
    C[0][1]={80};
    C[0][2]={100};
    C[1][0]={190};
    C[1][1]={105};
    C[1][2]={108};
    
    for(int i =0 ; i<2;i++){
        for(int j = 0 ; j<3;j++){
            cout << a[i][j]<< "  ";
        }
    }
    for(int i =0 ; i<2;i++){
        for(int j = 0 ; j<3;j++){
            cout << C[i][j]<<" ";
        }
    }
    //3.
    int **d;
    d= new int*[2];
    d[0]=new int[3];
    d[1]=new int[3];
    d[0][0]={10};
    d[0][1]={800};
    d[0][2]={1000};
    d[1][0]={1900};
    d[1][1]={1050};
    d[1][2]={1080};
    for(int i =0 ; i<2;i++){
        for(int j = 0 ; j<3;j++){
            cout <<'\n';
            cout << d[i][j]<<" ";
        }
    }
    return 0;
}