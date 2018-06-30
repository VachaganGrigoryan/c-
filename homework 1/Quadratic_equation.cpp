#include <iostream> 
#include <cmath>

int main()
{
	double a, b, c; //coefficients of ax^2+bx+c
	std::cin >> a >> b >> c; 
	if (a != 0)
	{
		//if a is nonzero, the equation is quadratic
		std::cout << "Quadratic equation\n";
		double D = b*b - 4*a*c; //discriminant
		std::cout << "Discriminant: " << D << "\n";
		if (D > 0)
		{
			//two solutions
			double x1 = (-b - sqrt(D))/(2*a);
			double x2 = (-b + sqrt(D))/(2*a);
			std::cout << "Two solutions: " << x1 << " " << x2 << "\n";
		}
		else if (D == 0.0 || D == -0.0)
		{
			//one solution
			double x = -b/(2*a);
			std::cout << "One solution: " << x << "\n";
		}
		else // D < 0
		{
			std::cout << "No solutions\n";
		}
	}
	else //this means a == 0, this is not a quadratic equation
	{
		std::cout << "Non-quadratic equation\n";
		if (b != 0)
		{
			std::cout << "One solution: " << -c/b << "\n";
		}
		else if (c == 0) // equation 0 = 0 
		{
			std::cout << "Infinite solutions\n";
		}
		else // equation c = 0
		{
			std::cout << "No solutions\n";
		}
	}
}