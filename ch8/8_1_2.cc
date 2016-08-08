#include <iostream>

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
    read(std::cin);
    std::cout << std::cin.rdstate() << std::endl;

    return 0;
}
