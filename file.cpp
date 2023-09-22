#include<iostream>
using namespace std;

class Car
{
    char model[20];
    int id;
    static int no_of_wheels;
    static int count;
public:
    void input()
    {
        cout << "Enter model: ";
        cin >> model;

        cout << "Enter id: ";
        cin >> id;
    }
    void display()
    {
        cout << "Your model is " << model << " and your id is " << id << endl;
    }
    static void count_of_Models()
    {
        count++;
        cout << "Count of models: " << count << endl;

        no_of_wheels++;
        cout << "Number of wheels: " << no_of_wheels << endl;
    }
};

int main(){
    Car maruti;
    maruti.input();
    maruti.display();
    maruti.count_of_Models();

    Car maruti2;
    maruti2.input();
    maruti2.display();
    maruti2.count_of_Models();


    return 0;
}