// store data of students and print those students data whose roll is odd.
#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    int marks;

public:
    void input()
    {
        cout << "Enter roll: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }

    void findoddroll(int n);
};
void Student::findoddroll(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (this->roll % 2 == 1)
        {
            cout << "roll: " << this->roll << endl;
            cout << "name: " << this->name << endl;
            cout << "marks: " << this->marks << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter data of stu-" << i << endl;
        st[i].input();
    }

    for (int i = 0; i < n; i++)
    {
        st[i].findoddroll(n);
    }

    return 0;
}