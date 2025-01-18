#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << "Parent constructor called" << endl;
    }
    ~Person()
    {
        cout << "Parent destructor called" << endl;
    }
};
class Student : public Person
{
public:
    int roll;
    Student(string name, int age, int roll) : Person(name, age)
    {
        this->roll = roll;
        cout << "child condstructor called" << endl;
    }
    ~Student()
    {
        cout << "child destructor called" << endl;
    }
    void getInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << roll << endl;
    }
};

int main()
{
    Student s1("Supriyo", 21, 512);
    s1.getInfo();
    return 0;
}