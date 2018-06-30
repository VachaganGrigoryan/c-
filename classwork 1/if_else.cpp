#include <iostream>


int main()
{
    int x;
    std::cin >> x;
    if(x > 0)
    {
        std::cout << x;
    }
    else
    {
        std::cout << -x;
    }

    /*
    int x;
    std::cin >> x;
    if(x < 0)
    {
       x = -x;
    }
    std::cout << x;
    */
}