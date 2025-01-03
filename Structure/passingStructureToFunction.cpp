#include <iostream>
using namespace std;
struct student
{
    int roll;
    float cgpa;
    string name;
};
void printInfo(struct student s1)
{
    cout
        << s1.name << endl
        << s1.cgpa << endl
        << s1.roll;
}
int main()
{
    struct student s[100] = {24, 3.61, "Supriyo"};
    printInfo(s[0]);

    return 0;
}