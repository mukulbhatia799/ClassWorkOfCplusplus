// operator overloading using member and friend function in c++.
// return total sum of students marks and return which student have greater marks.
#include<iostream>
using namespace std;

class student {
    int subj1Marks;
    int subj2Marks;
    int sum;
public:
    student(int subj1Marks, int subj2Marks)
    {
        this->subj1Marks = subj1Marks;
        this->subj2Marks = subj2Marks;
        sum = subj1Marks + subj2Marks;
    }
    student(int total)
    {
        this->sum = total;
    }
    void display()
    {
        cout << "Sum of student 1 and student 2 marks is " << this->sum << endl;
    }
    friend student operator+(student &stu1, student &stu2)
    {
        cout << "Student 1 total marks is " << stu1.sum << endl;
        cout << "Student 2 total marks is " << stu2.sum << endl;
        return student(stu1.subj1Marks + stu1.subj2Marks + stu2.subj1Marks + stu2.subj2Marks);
    }
    friend bool operator>(student &stu1, student &stu2)
    {
        return stu1.sum > stu2.sum ? 1 : 0;
    }
};

int main(){
    student stu1(10, 15), stu2(10, 13);

    student obj = stu1 + stu2;
    obj.display();

    if(stu1 > stu2) cout << "Student 1 total marks is greater than student 2 marks" << endl;
    else cout << "student 2 marks is greater than student 1 marks " << endl;

    return 0;
}