#include <forward_list>
#include <string>
#include <iostream>

using std::forward_list;
using std::string;

void searchAndInsert(forward_list<string> &, string before, string ins);

int main()
{
    forward_list<string> fstring = {"h", "e", "l", "l", "o"};
    string strBefore = "e", strInsert = "hehe";
    searchAndInsert(fstring, strBefore, strInsert);
    for(auto s : fstring)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}

void searchAndInsert(forward_list<string> & fstring, string before, string ins)
{
    auto sav = fstring.begin();
    for(auto iter = fstring.begin(); iter != fstring.end(); ++iter)
    {
        if(*iter == before)
        {
            fstring.insert_after(iter, ins);
            return;
        }
        sav = iter;
    }
        fstring.insert_after(sav, ins);
}
