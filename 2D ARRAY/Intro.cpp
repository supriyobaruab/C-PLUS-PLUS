#include <iostream>
using namespace std;

int main()
{
    int a[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value of column " << i + 1 << " row " << j + 1 << ":";
            cin >> a[i][j];
        }
    }
    cout << "Showing the 2d array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}