#include <iostream>
using namespace std;

struct student
{
    int roll;
    float CGPA;
    string name;
};
int main()
{
    struct student CSE[100];
    CSE[0].roll = 24;
    CSE[0].CGPA = 3.61;
    CSE[0].name = "Supriyo";
    cout
        << CSE[0].name << endl
        << CSE[0].CGPA << endl
        << CSE[0].roll;
    return 0;
}