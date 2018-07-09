#include <iostream>
int isPowerOfTwo (unsigned long long x)
{
	return ((x != 0) && ((x & (~x + 1)) == x));
}
 
int main()
{
    unsigned long long n;
	std::cin >> n;
	std::cout<< isPowerOfTwo (n);

}