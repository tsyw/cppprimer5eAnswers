#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string s;
	for(int i = 1; i != (argc); ++i)
		s += argv[i];
	std::cout << s << std::endl;

	return 0;
}
