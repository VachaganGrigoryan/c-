#include <iostream>
void function_print(int n)
{
	if (n == 0)
		return;
	int N;
	std::cin >> N;
	function_print(n- 1);
	std::cout << N;

}
int main()
{
	int n;
	std::cin >> n;
	function_print(n);
	
}