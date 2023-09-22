#include<iostream>
using namespace std;

class Employee
{
    string name;
    int emp_id;
    int salary;
    char grade;
public:
    void input()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee id: ";
        cin >> emp_id;
    }
    void performance()
    {
        cout << "\nA\nB\nC\nD\n";
        cout << "Enter employee performance: ";
        cin >> grade;
    }
    void print_salary()
    {
        switch(grade)
        {
            case 'A':
                cout << "You got " << grade << " grade. So, your salary is " << 40000 << endl;
                break;
            case 'B':
                cout << "You got " << grade << " grade. So, your salary is " << 30000 << endl;
                break;
            case 'C':
                cout << "You got " << grade << " grade. So, your salary is " << 20000 << endl;
                break;
            case 'D':
                cout << "You got " << grade << " grade. So, your salary is " << 10000 << endl;
                break;
            default:
                cout << "Grade is invalid.." << endl;
                break;
        }
    }
};

int main(){
    Employee emp1;
    emp1.input();
    emp1.performance();
    emp1.print_salary();

    return 0;
}