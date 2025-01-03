#include <iostream>
using namespace std;

void prime(int n)
{
    int isPrime = 0;
    if (n == 1)
    {
        cout << "Not a prime number";
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a prime Number";
    }
}

int main()
{
    int n;
    cout << "Enter a number to check if it's a prime number :";
    cin >> n;
    prime(n);

    return 0;
}