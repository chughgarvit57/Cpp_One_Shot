#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int salary;
    void printDetails(){
        cout<<"The nem of our first employee is "<<this->name<<" and his slary is "<<this->salary<<endl;
    }
};



int main(){
    cout<<"OOPS Concept in C++"<<endl;
    Employee avi;
    avi.salary = 1500000;
    avi.name = "GC";
    avi.printDetails();
    return 0;
}