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
    std::vector<std::string>v;
    std::ifstream fin("AsteroidsDatabase.txt");
   	int k=0,x,y,z;
	while (fin >> x >> y >> z) {
		std::stringstream line;
 		line << x << " " << y << " " << z;
 		v.push_back(line.str());
		pow_xyz.push_back(x*x+y*y+z*z);
		min_ast.push_back(k++);
	}
	fin.close();
	selectionSort(pow_xyz,min_ast);
	std::ofstream fout("AsteroidsSortedByDanger.txt");
	for (int i = 0; i < min_ast.size(); ++i)
		fout << v[min_ast[i]] << "\n";
	fout.close();
}


