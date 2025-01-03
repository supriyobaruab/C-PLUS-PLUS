#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 3; i++)
    {
        for (int i = 1; i < 4; i++)
        {
            cout << "0";
            cout << "X";
        }
        cout << endl;
        for (int i = 1; i < 4; i++)
        {
            cout << "X";
            cout << "0";
        }
        cout << endl;
    }
}