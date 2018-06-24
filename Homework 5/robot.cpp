#include <iostream>
#include <string>

void process_command(int& x, int& y, const std::string& command)
{
	if(command == "up")
		++y;
	else if (command == "down")
		--y;
	else if (command == "left")
		--x;
	else if (command == "right")
		++x;
}

int main()
{
	int x, y;
	std::cin >> x >> y;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; ++i)
	{
		std::string cmd;
		std::cin >> cmd;
		process_command(x, y, cmd);
	}
	std::cout << x << " " << y;

}