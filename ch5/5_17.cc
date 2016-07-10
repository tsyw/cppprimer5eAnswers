#include <iostream>
#include <vector>

using std::vector;
using std::cout; using std::cin; using std::endl;

int main()
{
	vector<int> ivec1{0, 1, 1, 2}, ivec2{0, 1, 1, 2, 3, 5, 8};
	auto size = ivec1.size() < ivec2.size() ? ivec1.size() : ivec2.size();
	if(!ivec1.empty() && !ivec2.empty())
	{
		decltype(ivec1.size()) ix = 0;
		for(; ix != size; ++ix)
		{
			if(ivec1[ix] != ivec2[ix])
			{
				cout << "NO";
				break;
			}
		}
		if(ix == size)
			cout << "YES" << endl;
	}
	else
		cout << "one or two strings are empty!" << endl;

	return 0;
}
