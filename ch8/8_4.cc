#include <vector>
#include <fstream>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::getline;

void read(const string &filename, vector<string> &strvec)
{
    std::ifstream ifs(filename);
    if(ifs)
    {
        string buf;
        while(getline(ifs, buf))
            strvec.push_back(buf);
    }
}

int main(int argc, char *argv[])
{
    vector<string> strvec;
    read(argv[1], strvec);
    for(const auto &svec : strvec)
    {
        std::cout << svec << std::endl;
    }

    return 0;
}
