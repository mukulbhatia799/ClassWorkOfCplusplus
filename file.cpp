#include<iostream>
using namespace std;

class Programming 
{
    string str = "Programming languages";
public:
    Programming()
    {
        cout << "I love " << str << endl;
    }
    Programming(string print)
    {
        str = print;
        cout << "I love " << str << endl;
    }
};

int main(){
    Programming pr1;
    Programming pr2("cpp");

    return 0;
}