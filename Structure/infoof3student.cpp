#include <iostream>
using namespace std;

struct personInfo
{
    string name;
    int roll;
    string section;
};
int main()
{
    struct personInfo person1, person2, person3;
    // student 1
    person1.name = "Supriyo";
    person1.roll = 19;
    person1.section = "B7";
    // student 2
    person2.name = "Debongshi";
    person2.roll = 21;
    person2.section = "B18";
    // student 3
    person3.name = "Sany";
    person3.roll = 12;
    person3.section = "B2";
    cout
        << person1.name << endl
        << person1.roll << endl
        << person1.section;
    cout
        << person2.name << endl
        << person2.roll << endl
        << person2.section;
    cout
        << person3.name << endl
        << person3.roll << endl
        << person3.section;
    return 0;
}