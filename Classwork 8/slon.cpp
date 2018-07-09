#include <iostream>
#include <vector>
const int size = 8;
typedef std::vector <std::vector<char>> mat;
void fill(mat& v, int b_i, int b_j, int di, int dj)
{
	int i = b_i + di;
	int j = b_j + dj;
	while (i >= 0 && j >= 0 && i != size && j != size)
	{
		v[i][j] = 'X';
		i += di;
		j += dj;
	}
}
int main()
{

	int b_i = 0;
	int b_j = 0;
	mat v(size, std::vector<char>(size));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cin >> v[i][j];
			if (v[i][j] == 'B')
			{
				b_i = i;
				b_j = j;
			}
		}
	}
	fill(v, b_i, b_j, -1, 1);
	fill(v, b_i, b_j, -1, -1);
	fill(v, b_i, b_j, 1, -1);
	fill(v, b_i, b_j, 1, 1);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			std::cout << v[i][j];
		}
		std::cout << "\n";
	}
}