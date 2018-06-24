#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <fstream>
void selectionSort(std::vector<int>& v,std::vector<int>& min_ast)
{
	for (int i = 0; i < v.size(); ++i)
	{
		int min_ind = i;
		for (int j = i; j < v.size(); ++j) 
		{
			if (v[j] < v[min_ind])
				min_ind = j;			
		}
		std::swap(v[i], v[min_ind]);
		std::swap(min_ast[i], min_ast[min_ind]);
	}
}
void filefin(int& x,int& y,int& z,int n){
	std::ifstream fin("AsteroidsDatabase.txt");
	for (int i = 0; i <= n; ++i)
		fin >> x >> y >> z;
	fin.close();
}
int main() {

    std::vector<int> pow_xyz, min_ast;
   	int x, y, z,k=0;

    std::ifstream fin("AsteroidsDatabase.txt");
	while (fin >> x >> y >> z) {
		pow_xyz.push_back(x*x+y*y+z*z);
		min_ast.push_back(k++);
	}
	fin.close();
	selectionSort(pow_xyz,min_ast);
	std::ofstream fout("AsteroidsSortedByDanger.txt");
	for (int i = 0; i < min_ast.size(); ++i)
	{
		filefin(x,y,z,min_ast[i]);
		fout << x << " " << y << " " << z << "\n";
	}
	fout.close();
}

