#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vi{12,3,2,32,3,23,2,3,223,4,2,3,68,4,7,7,45,64,6,1};
    auto iter = vi.begin();
    while(iter != vi.end())
    {
        if(*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            ++iter;
        }
        ++iter;
    }
    for(auto i : vi)
    {
        std::cout << i << " " ;
    }
    std::cout << std::endl;
}
