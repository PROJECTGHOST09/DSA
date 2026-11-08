#include <iostream>
using namespace std;
class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(int s){
            this->size=s;A=new int[s];
        }
        void create(){
            length=6;
            for(int i = 0 ; i < length ; i++){
                A[i]=100;
            }
            cout<<"Array created "<<endl;
        }
        void append(int x){
            A[length]=x;
            length++;
            cout<<"Element added \n";
        }
        void insert(int index , int x){
            for(int i = length;i>index;i--)
            {A[i]=A[i-1];}
            A[index]=x;
            length++;
            cout<<"THE ELEMENT IS ADDED AT "<<index<<" ITS VALUE IS "<<x<<endl;
        }
        void display(){
            for(int i = 0;i<length;i++){
                cout << A[i]<<endl;
            }
        }
        ~Array(){
            delete[] A;
        }
};
int main(){
    Array a(100);
    a.create();
    a.display();
    a.append(50);
    a.display();
    a.insert(4,70);
    a.display();

}