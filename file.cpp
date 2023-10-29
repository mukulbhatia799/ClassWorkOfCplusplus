#include<iostream>
#include<cmath>
using namespace std;

class Arithmetic {
    float real;
    float imag;
public:
    Arithmetic()
    {
        real = 0;
        imag = 0;
    }
    void input(Arithmetic &comp2)
    {
        cin >> this->real >> this->imag;
        cin >> comp2.real >> comp2.imag;
    }
    Arithmetic operator+(Arithmetic &ar)
    {
        Arithmetic temp;
        temp.real = this->real + ar.real;
        temp.imag = this->imag + ar.imag;
        if(temp.imag < 0) cout << temp.real << " - " << abs(temp.imag) << "i" << endl;
        else 
            cout << temp.real << " + " << temp.imag << "i" << endl;
        return temp;
    }
    Arithmetic operator-(Arithmetic &ar)
    {
        Arithmetic temp;
        temp.real = this->real - ar.real;
        temp.imag = this->imag - ar.imag;
        if(temp.imag < 0) cout << temp.real << " - " << abs(temp.imag) << "i" << endl;
        else 
            cout << temp.real << " + " << temp.imag << "i" << endl;
        return temp;
    }
};

int main(){
    Arithmetic comp1, comp2;
    comp1.input(comp2);
    Arithmetic com3 = comp1.operator+(comp2);
    com3 = comp1.operator-(comp2);
    
    return 0;
}