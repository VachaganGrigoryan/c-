#include <iostream>

int main()
{
    int a = 10;
    int b = 20;

    /*
    a = a + b;
    b = a - b;
    a = a - b;
    */

    int t = a;
    a = b;
    b = t;

    std::cout << a << " " << b;
}