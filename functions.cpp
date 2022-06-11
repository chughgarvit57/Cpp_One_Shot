#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int multiply(int c,int d){
    return c*d;
}

int subtract(int e,int f){
    return e-f;
}

float divide(int g,int h){
    return g/h;
}

int main(){
    cout<<"Functions in C++"<<endl;
    int a,b,c,d,e,f,g,h;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"a+b is "<<sum(a,b);
    cout<<endl;
    cout<<endl;

    cout<<"Enter c: ";
    cin>>c;
    cout<<"Enter d: ";
    cin>>d;
    cout<<"c*d is "<<multiply(c,d);
    cout<<endl;
    cout<<endl;

    cout<<"Enter e: ";
    cin>>e;
    cout<<"Enter f: ";
    cin>>f;
    cout<<"e-f is "<<subtract(e,f);
    cout<<endl;
    cout<<endl;

    cout<<"Enter g: ";
    cin>>g;
    cout<<"Enter h: ";
    cin>>h;
    cout<<"g/h is "<<divide(g,h);
    cout<<endl;
    cout<<endl;
    return 0;
}