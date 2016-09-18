#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    std::cout << ivec[0] << std::endl;
    std::cout << *ivec.begin() << std::endl;
    std::cout << ivec.front() << std::endl;
    std::cout << ivec.at(0) << std::endl;

    return 0;
}
