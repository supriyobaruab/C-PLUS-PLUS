#include <iostream>
using namespace std;
struct info
{
    int roll;
    float cgpa;
};
int main()
{
    //*ptr.code = ptr->code
    struct info s1 = {24, 3.61};
    struct info *ptr = &s1;
    cout << "Student roll : " << ptr->roll << endl
         << ptr->cgpa;

    return 0;
}