#include <iostream>
#include <vector>

void logistics(std::vector<int>&object,std::vector<int>&count,int m)
{
    if(m<count.size()){
        int A,B;
        std::cin>>A>>B;
            
        for(int i = 0; i<object.size();i++)
            if(object[i]>=A && object[i] <= B )
                count[m]++;
        logistics(object,count,m+1);
    }
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
    logistics(object,count,0);
    
    for(int i = 0; i<m;i++)
        std::cout << count[i] << "\n";    
}