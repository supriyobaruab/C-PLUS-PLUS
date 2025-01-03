#include <iostream>
using namespace std;

int sum(int n)
{
    int grandSum = 0;
    while (n > 0)
    {
        int temp = n % 10;
        n = n / 10;
        grandSum += temp;
    }
    return grandSum;
}

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    cout << sum(n);

    /*
    for practice
        int avg = 0;
        int n = 12;
        for (int i = 1; i < 2; i++)
        {
            int temp = n % 10;
            n = n / 10;
            cout << n << endl;
            avg = n + temp;
        }
        cout << avg;
    */
}