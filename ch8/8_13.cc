#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "8_13.h"

using std::vector;
using std::string;

int main(int argc, char *argv[])
{
    vector<PersonInfo> people;
    std::ifstream in(argv[1]);
    std::ofstream out(argv[2]);
    
    read(in, people);
    formatOutput(out, people);

    in.close();
    out.close();

    return 0;
}
