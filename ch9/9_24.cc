#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec = {1};
    std::cout << ivec[0] << " " << *ivec.begin() << " " 
              << ivec.front() << " " << ivec.at(0) << std::endl;

    return 0;
}
