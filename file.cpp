#include<iostream>
#include<vector>
using namespace std;

class PopulationMatrix {
    int m;
    vector<vector<int>> vec;
public:
    PopulationMatrix() {
        cin >> m;
        for(int i = 0; i < m; i++)
        {
            vec.push_back(vector<int>());
            for(int j = 0; j < m; j++)
            {
                int ele;
                cin >> ele;
                vec[i].push_back(ele);
            }
        }
    }
    void operator--()
    {
        vector<vector<int>> vec2 = this->vec;
        for(int i = 0; i < this->m; i++)
        {
            for(int j = 0; j < this->m; j++)
            {
                vec2[i][j]--;
            }
        }
        cout << "Matrix after incrementing each element by 1:" << endl;
        for(int i = 0; i < this->m; i++)
        {
            for(int j = 0; j < this->m; j++)
            {
                cout << vec2[i][j] << " ";
            }
            cout << endl;
        }
    }
    void operator++()
    {
        vector<vector<int>> vec2 = this->vec;
        for(int i = 0; i < this->m; i++)
        {
            for(int j = 0; j < this->m; j++)
            {
                vec2[i][j]++;
            }
        }
        cout << "Matrix after decrementing each element by 1:" << endl;
        for(int i = 0; i < this->m; i++)
        {
            for(int j = 0; j < this->m; j++)
            {
                cout << vec2[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    PopulationMatrix pm;
    ++pm;
    --pm;
    
    return 0;
}