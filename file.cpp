#include<iostream>
using namespace std;

class Constructor_Handling
{
    int age;
    double salary;
    string name;
public:
    Constructor_Handling()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Welcome " << name << endl;
    }
    Constructor_Handling(string name, double salary, int age)
    {
        this->name = name;
        this->salary = salary;
        this->age = age;
        cout << "Your name is " << name << endl;
        cout << "Your salary is " << salary << endl;
        cout << "Your age is " << age << endl;
    }
};

int main(){
    Constructor_Handling con1;
    Constructor_Handling con2("Mukul", 100000, 21);
    

    return 0;
}