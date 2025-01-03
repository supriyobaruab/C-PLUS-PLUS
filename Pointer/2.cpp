#include <iostream>
using namespace std;

int main(){
    int a =10;
    int b =20;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    int sum = *p1 + *p2;
    cout <<sum;
}