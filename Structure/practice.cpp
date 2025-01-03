#include <iostream>
using namespace std;
typedef struct address
{
    int houseNo;
    int block;
    string city;
    string state;
} house;
int main()
{
    house s1 = {10, 5, "Dhaka", "Bangladesh"};
    cout << s1.houseNo;
    return 0;
}