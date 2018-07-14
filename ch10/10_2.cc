#include <algorithm>
#include <list>
#include <string>
#include <iostream>

int main()
{
    std::list<std::string> svec;
    std::string temp;

    while(std::cin >> temp)
    {
        svec.push_back(temp);
    }

    int cnt = std::count(svec.cbegin(), svec.cend(), "0");

    std::cout << cnt << std::endl;

    return 0;
}