#include <iostream>

int NumGuesser(int a, int b, int qayl)
{
    if (qayl<=10)
    {
        int g = (a+b)/2;
        std::cout << "My guess numbre " << qayl << ": "<< g << "\n";
        int comands;
        std::cin >> comands;
        if (comands==1)
            a = g+1;
        else if (comands==-1)
            b = g;
        else if (comands==0)
        {
            std::cout <<"Yay! I figured out your number with " << qayl << " guesses!" << "\n";
            return 0;
        }
        NumGuesser(a, b, qayl+1);
    }else{
        std::cout <<"I was not able to figure out your number within 10 guesses. You must have cheated!"<< "\n";
        return 0;
    }
}
 
int main()
{
    int n;
    std::cout <<  "Think of a number in the range [1, 999]"  << "\n";
    std::cin >> n;
    NumGuesser(1, 999, 1);
}