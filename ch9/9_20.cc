#include <iostream>
#include <list>
#include <deque>

using std::deque; using std::list;
using std::cout; using std::cin; using std::endl;

int main()
{
    list<int> ilst = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> ideqOdd, ideqEven;
    for(auto i : ilst)
    {
        if(i % 2)
            ideqOdd.push_back(i);
        else
            ideqEven.push_back(i);
    }
    for(auto out : ideqOdd)
        cout << out << " ";
    cout << endl;
    for(auto out : ideqEven)
        cout << out << " ";
    cout << endl;

    return 0;
}
