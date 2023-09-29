#include<iostream>
using namespace std;

class Constructor_Handling
{
    int age;
    double salary;
public:
    string name;
    Constructor_Handling()
    {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Welcome " << name << endl;
        Constructor_Handling con2(name, 100000, 21);
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
    int newClient;
    
    cout << "Enter your choice: ";
    cout << "\n1. Default constructor \n2. Parameterized constructor" << endl;
    cin >> newClient;

    return 0;
}