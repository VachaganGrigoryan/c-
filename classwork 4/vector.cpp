#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v; //empty vector, 0 element
	std::vector<int> v1(3); //vector of 3 elements: 0 0 0 
	std::vector<int> v2(3, 4); //vector of 3 elements: 4 4 4
	std::vector<int> v3 = { 1, 3, 4, 7 }; //vector of 4 elements: 1 3 4 7
	
	std::cout << v3.size(); // prints 4

	std::cout << v3[1]; //prints 3, elements are enumerated starting from 0

	std::vector<int> nums(100);
	for (int i = 0; i < nums.size(); ++i)
		nums[i] = i + 1;

	for (int i = 0; i < nums.size(); ++i)
		std::cout << nums[i] << " ";
}