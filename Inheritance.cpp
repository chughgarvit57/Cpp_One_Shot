#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int secretPasswd)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = secretPasswd;
    }
    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his slary is " << this->salary << endl;
    }

    void getSecretPassword()
    {
        cout << "The secret password of the employee is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};



class Programmer : public Employee{
    public:
    int errors;
};



int main()
{
    cout << "OOPS Concept in C++" << endl;
    Employee avi("Avi Constructor", 200000, 125687);
    // avi.salary = 1500000;
    // avi.name = "GC";
    avi.printDetails();
    // cout<<avi.secretPassword;
    avi.getSecretPassword();
    return 0;
}