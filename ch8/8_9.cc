#include <iostream>
#include <sstream>

std::istream &read(std::istream &is)
{
    char cnum;
    while(is >> cnum)
    {
        std::cout << cnum << std::endl;
    }
    is.clear();

    return is;
}

int main()
{
    std::istringstream ostr("123 qwer asdf zxcv");
    read(ostr);
    std::cout << std::cin.rdstate() << std::endl;

    return 0;
}
