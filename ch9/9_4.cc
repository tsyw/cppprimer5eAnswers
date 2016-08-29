#include <vector>
#include <iterator>

using std::vector;
using std::iterator;

bool findInt(vector<int>::iterator beg, vector<int>::const_iterator end, int comp)
{
    for(auto iter = beg; iter != end; ++iter)
    {
        if(*iter == comp)
            return true;
    }
    return false;
}
