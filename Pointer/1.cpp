#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int *p;
    p = &x;

cout << x <<" "<<&x <<" "<<p <<" " <<*p;
}