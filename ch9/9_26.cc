#include <vector>
#include <list>
#include <iterator>
#include <iostream>

using std::begin; using std::end;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::vector<int> ivec;
    std::list<int> ilst;
    ivec.assign(begin(ia), end(ia));
    ilst.assign(begin(ia), end(ia));
    auto it1 = ivec.begin();
    auto it2 = ilst.begin();
    while(it1 != ivec.end())
    {
        if(!(*it1 % 2))
        {
            it1 = ivec.erase(it1);
        }
        else
            ++it1;
    }
    while(it2 != ilst.end())
    {
        if(*it2 % 2)
        {
            it2 = ilst.erase(it2);
        }
        else
            ++it2;
    }
    for(auto p : ivec)
        std::cout << p << " ";
    std::cout << std::endl;
    for(auto p : ilst)
        std::cout << p << " ";
    std::cout << std::endl;

    return 0;
}
