#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ivec;
    int temp = 0;

    while(std::cin >> temp)
    {
        ivec.push_back(temp);
    }

    int cnt = std::count(ivec.cbegin(), ivec.cend(), 0);

    std::cout << cnt << std::endl;

    return 0;
}