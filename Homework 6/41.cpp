#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <sstream>
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
int main() {
    std::vector<int> pow_xyz, min_ast;
    std::vector<int> X,Y,Z;
    std::ifstream fin("AsteroidsDatabase.txt");
   	int k=0,x,y,z;
	while (fin >> x >> y >> z) {
		X.push_back(x);
		Y.push_back(y);
		Z.push_back(z);
		pow_xyz.push_back(x*x+y*y+z*z);
		min_ast.push_back(k++);
	}
	fin.close();
	selectionSort(pow_xyz,min_ast);
	std::ofstream fout("AsteroidsSortedByDanger.txt");
	for (int i = 0; i < min_ast.size(); ++i)
		fout  << X[min_ast[i]] << " " << Y[min_ast[i]] << " " << Z[min_ast[i]] << "\n";
	fout.close();
}