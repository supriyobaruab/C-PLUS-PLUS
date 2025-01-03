#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = {"mango"};
    char b[100];

    strncpy(b, a, 3);
    cout << b;
}