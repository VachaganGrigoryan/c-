#include <iostream>

int main()
{
    //|| Logical OR
    //&& Logical AND
    //!  Logical NOT

    std::cout << "Please enter your age";
    int age;
    std::cin >> age;
    if(age >= 0 && age <= 100) //NOT 0 <= age <= 100, this is wrong
    {
        std::cout << "OK";
    }
    else
    {
        std::cout << "Wrong age!";
    }

    /*
    if(age < 0 || age > 100) 
    {
        std::cout << "Wrong age"
    }
    */

    /*
    if(a <= 100)

    is the same as

    if(!(a > 100))
    */
}