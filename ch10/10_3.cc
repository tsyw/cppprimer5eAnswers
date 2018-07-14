#include <numeric>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    int temp = 0;
    while(std::cin >> temp)
    {
        ivec.push_back(temp);
    }
    int sum = 0;
    sum = std::accumulate(ivec.cbegin(), ivec.cend(), 0);

    std::cout << sum << std::endl;

    return 0;
}