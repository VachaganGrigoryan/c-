#include <iostream>
#include <vector>

int main()
{
    std::vector<int> xoxovak(10);
    for(int i = 0; i < 10; i++)
        std::cin >> xoxovak[i];
    int num;
	std::cin >> num;
    int sum = 0;
    for(int i = 0; i < 10; i++)
        sum += ((num & (1 << i)) ? xoxovak[9-i]:0);
    std::cout << sum << "\n";
}

