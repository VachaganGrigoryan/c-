#include <iostream>
int factorial(int n) {  //n հատ թիվ n = 5; n = 4; n = 3
	return n <= 1 ? 1 : n * factorial(n - 1);   // 5*factorial(4) * factorial(3) * factorial(2)
}
int main() {
	int n;
	std::cin >> n;
	std::cout << factorial(n) << "\n";
}


