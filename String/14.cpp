#include <iostream>
using namespace std;

int main()
{
    int age[10];
    int total = 0;
    float avg = 0;

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the age of student " << i + 1 << " :";
        cin >> age[i];
        total += age[i];
    }
    avg = (float)total / 10;
    cout << avg << endl;
    if ((int)avg % 2 == 0)
    {
        cout << "even number";
    }
    else
    {
        cout << "odd number";
    }
}