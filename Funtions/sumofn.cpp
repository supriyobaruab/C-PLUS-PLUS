#include <iostream>
using namespace std;

int sum = 0;

int sumofn(int n)
{
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    cout << sumofn(5) << endl;
    cout << sumofn(10);
}