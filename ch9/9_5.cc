#include <vector>
#include <iterator>

using std::vector;
using std::iterator;

vector<int>::iterator findInt(vector<int>::iterator beg, vector<int>::iterator end, int comp)
{
    for(auto iter = beg; iter != end; ++iter)
    {
        if(*iter == comp)
            return iter;
    }
    return end;
}
