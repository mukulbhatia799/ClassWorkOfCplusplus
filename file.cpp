#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout;
    int SUB[5];

    fout.open("C:\\Users\\hp\\Documents\\2vscodeData\\ClassWorkOfCplusplus\\file11.txt");
    for(int i=1;i<=3;i++)
    {
        int total=0;
        cout<<"Enter student marks: "<<i<<endl;
        for(int i=0;i<5;i++){
        cin>>SUB[i];
        }
        cout<<"Total marks: "<<i<<endl;
        fout<<"Total marks: "<<i<<endl;
        for(int i=0;i<5;i++)
        {
            total = total + SUB[i];
        }
        cout<<total<<endl;
        fout<<total<<endl;

        int grade = total/5;
        if(grade >= 90)
        {
            cout<<"grade : A"<<endl;
            fout<<"grade : A"<<endl;
        }
        else if(grade < 90 && grade > 75)
        {
            cout<<"grade : B"<<endl;
            fout<<"grade :B"<<endl;
        }
        else if(grade < 75 && grade > 33)
        {
            cout<<"grade: C"<<endl;
            fout<<"grade : C"<<endl;
        }
        else
        {
            cout<<"Fail"<<endl;
            fout<<"Fail"<<endl;
        }
    }
    fout.close();
    ifstream iff;
    iff.open("C:\\Users\\hp\\Documents\\2vscodeData\\ClassWorkOfCplusplus\\file11.txt");
    string str;
    while (getline(iff, str)) {
        cout << str << endl;
    }
    iff.close();

    return 0;
}