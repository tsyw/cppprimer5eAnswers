#include <iostream>
#include <list>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;
using std::list;

int main()
{
    list<string> dstr;
    string word;
    while(cin >> word)
    {
        dstr.push_back(word);
    }
    for(auto iter = dstr.cbegin(); iter != dstr.cend(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
