#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int j = 2;
    do
    {
        cout << ++i << endl;
        cout << j++ << endl;
    } while (i < 2);
}