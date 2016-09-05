#include <list>
#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::list<const char *> lold{"h", "e", "l", "l", "o"};
    std::vector<std::string> svec;
    svec.assign(lold.cbegin(), lold.cend());
    for(const auto str : svec)
    {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
