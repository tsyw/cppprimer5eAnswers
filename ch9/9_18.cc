#include <iostream>
#include <deque>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;
using std::deque;

int main()
{
    deque<string> dstr;
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
