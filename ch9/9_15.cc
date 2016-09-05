#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec1{1, 2, 3, 4};
    std::vector<int> ivec2{2, 3, 4, 5};
    std::cout << (ivec1 == ivec2) << std::endl;

    return 0;
}
