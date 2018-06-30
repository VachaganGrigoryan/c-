#include <iostream>

int main()
{
    //type name [= initial_value];
    int var;
    int x = 100;

    std::cout << "x"; //prints x;
    std::cout << x; //prints 100;
    std::cout << x + 1; //print 101;

    x = 27;

    std::cout << x; //prints 27;

    // std::cout << var; //UNDEFIED BEHAVIOR

}