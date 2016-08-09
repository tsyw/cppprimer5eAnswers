#include "8_6.h"
#include <fstream>
#include <iostream>

using std::ifstream;
using std::ofstream;

int main(int argc, char *argv[])
{
    Sales_data total;
    ifstream ifs(argv[1]);
    ofstream ofs(argv[2], ofstream::app);
    if(read(ifs, total))
    {
        Sales_data trans;
        while(read(ifs, trans))
        {
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(ofs, total) << std::endl;
                total = trans;
            }
        }
        print(ofs, total) << std::endl;
    }
    else
        std::cerr << "No data! " << std::endl;
    ofs.close();
    ifs.close();

    return 0;
}
