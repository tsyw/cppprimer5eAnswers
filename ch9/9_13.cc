#include <iostream>
#include <list>
#include <vector>

int main()
{
    
    std::list<int> ilst(10, 1);
    std::vector<int> ivec(10, 1);
    std::vector<double> dvec(ilst.begin(), ilst.end());
    std::vector<double> dvec2(ivec.begin(), ivec.end());

    for(auto p : dvec)
        std::cout << p << " ";
    std::cout << std::endl;
    for(auto p : dvec2)
        std::cout << p << " ";
    std::cout << std::endl;

    return 0;
}