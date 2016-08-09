#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    vector<string> recordLine;
    string line;
    while(std::getline(in, line))
    {
        recordLine.push_back(line);
    }
    for(const string &str : recordLine)
    {
        std::istringstream is(str);
        string word;
        while(is >> word)
            std::cout << word << std::endl;
    }

    return 0;
}
