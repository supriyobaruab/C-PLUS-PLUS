#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int lenth = 0; // এভারেজ বাইর করার জন্য ।
    for (int number = 2; number < 100; number++)
    {
        int count = 0;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            // cout <<number <<" ";
            lenth++; // ২৫ হবে।
            if (lenth == 10)
            {
                break;
            }
            cout << number << " ";
            sum = sum + number;
        }
    }
    int avrg = (sum / lenth);
    cout << "The total sum of prime numbers between 0 to 100 is :" << sum << endl;
    cout << "The average of total prime numbers : " << avrg;
    return 0;
}