#include <iostream>
#include <list>
#include <forward_list>

int main()
{
    std::list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::forward_list<int> vi1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while(iter != vi.end())
    {
        if(*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            ++++iter;
        }
        else
        {
            iter = vi.erase(iter);
        }
    }
    for(auto i : vi)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    auto iter1 = vi1.before_begin();
    auto iter2 = vi1.begin();
    while(iter2 != vi1.end())
    {
        if(*iter2 % 2)
        {
            iter2 = vi1.insert_after(iter1, *iter2);
            ++++iter1;
            ++++iter2;
        }
        else
        {
            iter2 = vi1.erase_after(iter1);
        }
    }
    for(auto i : vi1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
