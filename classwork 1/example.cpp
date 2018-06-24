#include <iostream>

int main()
{
    int x = 9;
    if(x % 3 == 0)
    {
        x = x + 1;
    }
    if(x % 2 == 0)
    {
        x = 20;
    }
    std::cout << x;


}