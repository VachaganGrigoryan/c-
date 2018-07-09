#include <iostream>
#include <vector>
typedef std::vector <std::vector<int>> mat;
int main()
{
    int n;
    std::cin >> n;
    mat matrix(n, std::vector<int>(n));
    
    int value = 1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i % 2 == 0)
                matrix[j][i] = value++;
            else
                matrix[n - j - 1][i] = value++;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
}