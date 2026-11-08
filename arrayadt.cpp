#include <iostream>
using namespace std;
class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(int s){
            this->size=s;
            A=new int[s];
        }
        void create(){
            length=6;
            cout<<"Array created"<<endl;
            for(int i =0 ; i<length;i++){
                A[i]=100;
            }
        }
        void display(){
            for(int i=0;i<length;i++)
            {
                cout<<A[i]<<"  ";
            }
        }
        ~Array(){
            delete[] A;
            cout<<"Array destroyed";
        }
};
int main(){
    Array a(11);
    a.create();
    a.display();
    return 0;
}