#include <iostream>
using namespace std;
typedef struct student
{
    int roll;
    float cgpa;
    string name;
} cse;

int main()
{
    cse s1 = {24, 3.61, "Supriyo"};
    cout << s1.roll;

    return 0;
}