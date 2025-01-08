#include <iostream>
#include <string.h>
using namespace std;

struct member
{
    char name[100];
    char roll[100];
    char sec[100];
    int year;
} cse[10];

void print()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Student name :" << cse[i].name << endl;

        cout << "Student roll :" << cse[i].roll << endl;

        cout << "Student section :" << cse[i].sec << endl;

        cout << "Student year :" << cse[i].year << endl;
    }
}

int main()
{
    bool isFound = false;
    int count = 0;
    char name[10];
    cout << "Enter a name to search (First word should be capital) :";
    cin.getline(name, 10);
    strcpy(cse[0].name, "Supriyo");
    strcpy(cse[0].roll, "001");
    strcpy(cse[0].sec, "A");
    cse[0].year = 2024;

    strcpy(cse[1].name, "Debongshi");
    strcpy(cse[1].roll, "002");
    strcpy(cse[1].sec, "B");
    cse[1].year = 2024;

    strcpy(cse[2].name, "Nourin");
    strcpy(cse[2].roll, "003");
    strcpy(cse[2].sec, "C");
    cse[2].year = 2024;
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(cse[i].name, name) == 0)
        {
            cout << "Name found" << endl;
            count = i;
            isFound = true;
            break;
        }
    }
    if (isFound == true)
    {
        cout << "Information for " << name << endl;
        cout << "Student name :" << cse[count].name << endl;

        cout << "Roll :" << cse[count].roll << endl;

        cout << "Section :" << cse[count].sec << endl;

        cout << "Year :" << cse[count].year << endl;

        // for (int i = 0; i < 2; i++)
        // {
        //     cout << "Enter the name of student :";
        //     cin >> cse[i].name;
        //     cout << "Enter the roll :";
        //     cin >> cse[i].roll;
        //     cout << "Enter the section :";
        //     cin >> cse[i].sec;
        //     cout << "Enter the year :";
        //     cin >> cse[i].year;
        // }
        // print();

        return 0;
    }
}