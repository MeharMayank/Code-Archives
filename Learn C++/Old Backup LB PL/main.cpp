#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << endl;
    };
    Employee(string n, int salary, int sp)
    {
        this->name = n;
        this->salary = salary;
        this->secretPassword = sp;
    }
    void getSecretPassword()
    {
        cout << "The secret password of employee is:  " << this->secretPassword;
    }
private:
    int secretPassword;
};
class Programmer : public Employee
{
public:
    int errors;
};
int main()
{
    Employee har("harry constructor", 344, 33422);
    har.printDetails();
    har.getSecretPassword();
    return 0;
}