#include <iostream>
#include <string.h>
using namespace std;

struct info
{
    char name[100];
    int age;
};
int main()
{
    struct info person1;
    strcpy(person1.name, "Supriyo");
    person1.age = 21;
    cout << person1.name << endl
         << person1.age;
}