#include <iostream>
#include <cmath>
#include <iomanip>

double SegmentLength(double x1, double y1, double x2, double y2)
{
	double dx = x1 - x2;
	double dy = y1 - y2;
	return std::sqrt(dx*dx + dy*dy);
}

int main()
{
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;
	std::cin >> x1 >> y1
		     >> x2 >> y2
		     >> x3 >> y3
		     >> x4 >> y4;

	double Perim = SegmentLength(x1, y1, x2, y2);
	Perim += SegmentLength(x2, y2, x3, y3);
	Perim += SegmentLength(x3, y3, x4, y4);
	Perim += SegmentLength(x4, y4, x1, y1);
	std::cout << std::fixed << std::setprecision(2) << Perim;
}