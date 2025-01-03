#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int a[2][2] = {
        {-2, 1},
        {0, 4}};
    int b[2][2] = {
        {6, 5},
        {-7, 1}};
    int c[2][2] = {{0, 0},
                   {0, 0}};

    // multiplication logic
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                c[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }

    // for showing the output
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
}