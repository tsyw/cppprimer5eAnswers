#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using std::vector;
using std::string;

struct Personinfo
{
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<Personinfo> people;
    std::istringstream record;
    while(std::getline(std::cin, line))
    {
        PersonInfo info;
        record.clear()
        record.str(line);
        record >> info.name;
        while(record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    return 0;
}
