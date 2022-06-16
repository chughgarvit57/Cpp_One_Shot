#include<iostream>
using namespace std;

int main(){
    // TODO Pointers 
    int a = 54;
    int* pointer_a;
    pointer_a = &a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*pointer_a<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<pointer_a<<endl;
    return 0;
}