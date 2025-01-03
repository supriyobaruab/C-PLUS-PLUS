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
    struct student s1 = {24, 3.61, "Supriyo"};
    cout << s1.name;
    return 0;
}