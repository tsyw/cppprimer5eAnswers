#include <iostream>
#include <cstring>
#include <cstddef>

using std::cout; using std::endl;
using std::strcat; using std::strcpy; using std::strlen;
using std::size_t;

const char cstr1[] = "Hello";
const char cstr2[] = "world!";

int main()
{
    constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
    char cstr3[new_size];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    cout << cstr3 << endl;
}
