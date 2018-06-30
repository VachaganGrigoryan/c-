#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if(a > b)
    {
        int t = a;
        a = b;
        b = t;
    }
    //std::cout << t; //t is out of scope

    std::cout << a << " " << b;
}