#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<char> cvec{'h', 'e', 'l', 'l', 'o'};
    std::string str(cvec.begin(), cvec.end());
    std::cout << str << std::endl;

    return 0;
}
