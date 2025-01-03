#include <iostream>
#include <cstring>
using namespace std;
void reverse(char a)
{
    int size = strlen(a);
    for (int i = 0; i < size; i++)
    {
        a[size - 1 - i] = a[i];
    }
}

int main()
{
    string n;
    cin >> n;
    reverse(n);
    cout << n;
    return 0;
}