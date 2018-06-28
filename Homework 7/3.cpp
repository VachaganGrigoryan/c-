#include <iostream>
#include <vector>
 
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a%b);
}
 
int LCM(int a, int b)
{
    return a * b / GCD(a, b);
}
 
int LCM(const std::vector<int> & numbers)
{
    int lcm = numbers[0];
    for (int i = 1; i < numbers.size(); ++i)        
        lcm = LCM(lcm, numbers[i]);

    return lcm;
}
 
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v1(n);
    for (int i = 0; i < n; ++i)
        std::cin >> v1[i];
    int m;
    std::cin >> m;
    std::vector<int> v2(m);
    for (int i = 0; i < m; ++i)
        std::cin >> v2[i];

    std::vector<int> v;
    int baj = LCM(v2);
    for (int i = 0; i < n; ++i)
        if (v1[i] % baj == 0)
            v.push_back(v1[i]);

    std::cout << v.size() <<  "\n";
    for (int i = 0; i < v.size(); ++i)
        std::cout << v[i] << "  ";
    std::cout << "\n";   
}