#include <iostream>
#include <vector>

int logistics(std::vector<int>&object)
{
    int A,B;
    std::cin>>A>>B;
    int count = 0;
    
    for(int i = 0; i<object.size();i++)
        if(object[i]>=A && object[i] <= B )
            count++;
    return count;
}

int main()
{   
    int n;
    std::cin >> n;
    std::vector<int> object(n);
    for(int i = 0; i<n;i++)
        std::cin>>object[i];
    
    int m;
    std::cin >> m;
    std::vector<int> count(m);  
    
    for(int i = 0; i<m;i++)
        count[i] = logistics(object);
    
    for(int i = 0; i<m;i++)
        std::cout << count[i] << "\n";    
}