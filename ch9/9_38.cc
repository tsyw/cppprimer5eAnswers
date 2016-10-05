#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ivec;
    std::cout << "capacity: " << ivec.capacity() << " " << "size: " << ivec.size() << std::endl;
    for(int i = 1; i != 100; ++i)
    {
        ivec.push_back(i);
        std::cout << "capacity: " << ivec.capacity() << " " << "size: " << ivec.size() << std::endl;
    }

    return 0;
}
